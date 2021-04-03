class Word

    def initialize(s, line)
        @s = s
        @line = 1
    end

    def s
        return @s
    end

    def format
        return @s.downcase.gsub(/[^a-z ]/, '')
    end
end