#!/usr/bin/env ruby

def contains_numbers(str)
  str =~ /[0-9]/
end
puts contains_numbers("number 1 school")
puts contains_numbers("moringa school")
