numArray = File.open("euler8number.txt", 'rb') {|file| file.read}
numArray = numArray.gsub("\r\n", "").split(//).map{|c| c.to_i}

counter = 0

for i in 3...998
	product =  numArray[i-2]*numArray[i-1]*numArray[i]*numArray[i+1]*numArray[i+2]
	if product > counter then
		counter = product
	end
end

puts counter

