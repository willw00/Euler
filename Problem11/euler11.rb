nums = File.open('Euler11nums.txt', 'rb') {|file| file.read}
nums = nums.gsub("\r\n", " ").split(/ /).map{|c| c.to_i}
rowcount = 0
colcount = 0
product = 0

17.times do
	17.times do
		test = nums[20 * rowcount + colcount]\
		       	* nums[20 * rowcount + colcount + 21]\
		       	* nums[20 * rowcount + colcount + 42]\
		       	* nums[20 * rowcount + colcount + 63]
		product = test if test > product
	       colcount += 1
      	 end
	 colcount = 0
	 rowcount += 1
end

colcount = 0
rowcount = 0

17.times do
	17.times do
		test = nums[3 + 20 * rowcount + colcount]\
		       	* nums[3 + 20 * rowcount + colcount + 19]\
		       	* nums[3 + 20 * rowcount + colcount + 38]\
		       	* nums[3 + 20 * rowcount + colcount + 57]
		product = test if test > product
	       colcount += 1
      	 end
	 colcount = 0
  	 rowcount += 1
end

puts "Product = #{product}"

 
