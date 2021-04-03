Class Bigram
	
    def initialize(first_word, second_word)
        @first_word = first_word
        @second_word = second_word
    end

    def phrase
        return first_word.format + " " + second_word.format
    end

    def first_word
        return @first_word
    end

    def second_word
        return @second_word
    end

    def compare(bigram)
	return self.phrase.eql?(biagram.phrase)
    end
end

    def compare(bigram)
	return self.phrase.eql?(bigram.phrase)
    end

    #def get_words
        #words = []
        #hash_words = get_hash_words
        #hash_words.keys.each {|k| hash_words[k].each {|w| words << Word.new(w,k)}}
	#return words
    #end

    #def get_words
        #words = []
        #token_lines = self.get_line_counts
        #token_lines.each {|k| k[1].each {|w| words << Word.new(w,k[0])}}
	#return words
    #end
        
    #def get_hash_words
        #grouped_tokens = self.get_tokens.each_slice(8).to_a
        #count = 0
        #h = {}
	#grouped_tokens.each {|t| h.store(count+=1, t)}
        #return h
    #end

    def get_line_counts
        grouped_tokens = self.get_tokens.each_slice(8).to_a
        count = 0
        token_lines = []
	grouped_tokens.each {|token| token_lines << [count+=1, token]}
        return token_lines
    end


