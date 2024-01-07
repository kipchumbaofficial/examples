#!/usr/bin/env ruby

def contains_vowels(str)
  str =~ /[aeiou]/
end

puts contains_vowels("Alx best school")
puts contains_vowels("sky")
