# CS 2040
# Lab 2
# Spring 2021
# Author: Nigel Nelson

require 'set'

# Class that is responsible for modeling a single word from a document, where
# the string value is stored in addition to the line that it appears on.
class Word

    # Constructor for a Word, where a token is a string of text and line is the
    # line on which the token appears in the original document.
    def initialize(token, line)
        @token = token
        @line = line
    end

    # Getter method for the instance of token
    def token
        return @token
    end

    # Getter method for the instance of line
    def line
        return @line
    end

    # Method that is responsible for returning the token in lower case, with
    # all periods, commas, semicolons, and colons removed.
    def format
        return @token.downcase.gsub(/[;:,.]/, '')
    end
end

# Class that is responsible for representing a Bigram, which is a pair of words
# that occur sequentially in a text document.
class Bigram
	
    # Constructor that takes a pair of sequentially occuring words, where first_word
    # and second_word are the words occurring first and second, respectively.
    def initialize(first_word, second_word)
        @first_word = first_word
        @second_word = second_word
    end

    # Method that is responsible for returning the complete bigram, where the words
    # appear in their formatted version.
    def phrase
        return first_word.format + " " + second_word.format
    end

    # Getter method for the instance of the first word
    def first_word
        return @first_word
    end

    # Getter method for the instance of the second word
    def second_word
        return @second_word
    end
end

# Class that is responsible for reading a text document, and getting contextual
# information from the text document
class Document

    # The max number of words that are to appear on a single line of output
    MAX_NUM_WORDS = 8

    # Constructor for a document, which calls an internal method to collect text input
    # and store it in an instance variable, and then use that text to store the individual
    # tokens in an instance variable
    def initialize
        @lines = self.get_lines
        @tokens = self.get_tokens
    end

    # Method that collects text input line by line until there is a blank line of input
    # and returns those lines of input as an array.
    def get_lines
        lines = []
        input = gets
        while input != nil
            lines << input
            input = gets
        end
        return lines
    end

    # Method that returns an array of the individual tokens from the text input
    def get_tokens
        tokens = []
        line_num = 1
        @lines.each {|l| tokens << l.split}
	return tokens.flatten
    end

    # Method that returns an array of the Words from the text input
    def get_words
        line_num = 0
        token_lines = []
        @lines.each {|line| token_lines << [line_num+=1, line]}
        words = []
        token_lines.each {|k| k[1].split.each {|w| words << Word.new(w,k[0])}}
	return words
    end

    # Method that returns the number of lines in the output formatted text
    def get_num_lines
        return @tokens.each_slice(MAX_NUM_WORDS).to_a.length
    end

    # Method that returns a string created from the input text, reformatted so that there
    # are a maximum of 8 words per line.
    def get_formatted_output
        s = []
        grouped_tokens = @tokens.each_slice(MAX_NUM_WORDS).to_a
        grouped_tokens.each {|g| s << g.join(" ")}
        return s.join("\n")
    end     
end

# Class that is reponsible for conducting the analysis of a text document.
class Analysis

    # Constant set that contains all the individual words that should be ignored for analysis.
    IGNORDED_WORDS = Set["a", "the", "is", "are", "i", "you", "he", "she", "it", "they", "and"]

    # Constructor that is responsible for making an instance variable of
    # a new Document, and calling its own execute analysis method to process
    # that new Document.
    def initialize
        @document = Document.new
        self.execute_analysis
    end

    # Method that is responsible for returning all of the valid Bigrams in the Document.
    def get_bigrams
        words = @document.get_words
        filtered_words = words.select {|word| !IGNORDED_WORDS.include?(word.format)}
        bigrams = []
        pairs = filtered_words.each_cons(2).to_a
        pairs.each {|p| bigrams << Bigram.new(p[0], p[1])}
        return bigrams
    end

    # Method that returns an array of all of the Bigrams that when formatted appear more than
    # once in the Document. Which are sorted by most appearances to least, and then sorted in
    # alphabetical order.
    def get_matching_bigrams
        bigrams = self.get_bigrams
        bigram_hash = Hash.new {|h,k| h[k] = []}
        bigrams.each {|bigram| bigram_hash[bigram.phrase] << bigram}
        multiple_bigrams = bigram_hash.select {|k,v| v.length > 1}
        return multiple_bigrams.sort_by {|k,v| [-v.length, k]}
    end

    # Method that prints out the formatted Bigram analysis, stating which phrases are
    # repeated, with each being followed by the lines on which they appear in the
    # original Document.
    def bigram_analysis
        puts "Repeated phrases:\n"
        self.get_matching_bigrams.each {|k,v| puts k + ": " + v.map {
            |bigram| bigram.first_word.line}.join(", ")}
    end

    # Method that prings out the number of lines in the formatted text output.
    def line_count_analysis
        puts "Output line count: " + @document.get_num_lines.to_s
    end

    # Method that prints out the formatted text, but only if it isn't empty.
    def print_formatted_output
        output_text = @document.get_formatted_output
        if output_text != ""
            puts output_text
        end
    end

    # Method that prints a format seperator that is expected in the final output.
    def print_analysis_break
        puts "---------- analysis ----------"
    end

    # Method that invokes each piece of the analysis in the order that it is expected to
    # appear in the output.
    def execute_analysis
        self.print_formatted_output
        self.print_analysis_break
        self.line_count_analysis
        self.bigram_analysis
    end  
end

# Class that is responsible for invoking the creation of a new Analysis when this Ruby file
# is ran.
class Main
    if __FILE__ == $0
        a = Analysis.new
    end
end