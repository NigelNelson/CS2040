# CS 2040
# Lab 1
# Spring 2021
# Author: Nigel Nelson

input = gets # Gets the first line of input
hits = 0
bases_reached = 0
at_bats = 0
appearances = 0
# The below loop is responsible for concatenating the input while input is not nil
while input != nil
    int_input = input.to_i
    if int_input > 0
        hits += 1
        at_bats += 1
    elsif int_input == 0
        at_bats += 1
    end

    bases_reached += int_input.abs
    appearances += 1
    input = gets
end

# The below conditionals are responsible for filtering cases where 0 division can happen
if at_bats > 0
    batting_average = ((hits.to_f/at_bats)*1000).round
else
    batting_average = 0
end

if appearances > 0
    av_bases_reached = (bases_reached.to_f/appearances).round(2)
else
    av_bases_reached = 0
end

# The bellow calls to puts print the formatted output to the user
puts "Batting average: #{batting_average}"
puts "Average bases reached: #{av_bases_reached}"

	