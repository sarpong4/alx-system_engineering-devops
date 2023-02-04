#!/usr/bin/env ruby
# THE REGEX MUST MATCH ONLY CAPS

puts ARGV[0].scan(/[A-Z]/).join
