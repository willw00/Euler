names = File.open("names.txt", 'rb') {|file| file.read}

namearr = names.split(',').sort
totscore = 0
namearr.each do |name|
	namescore = 0
	name.split(//).to_a.each {|n| namescore += (n.ord - 'A'.ord + 1)}
	totscore += (namescore *  (namearr.sort.index(name) + 1))
end
puts totscore
