#!/usr/bin/env ruby
# the regular expression must match a 10 digit number

puts ARGV[0].scan(/^\d{10}$/).join
