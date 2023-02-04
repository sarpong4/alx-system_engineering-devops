#!/usr/bin/env ruby
# take one argument and passes it to a regular expression, matching method - the regular expression must match the given cases

puts ARGV[0].scan(/hbt*n/).join
