nums = File.open("67numberlist.txt", 'rb') {|file| file.read}.split("\r\n").map {|array| array.split(" ")}

(1..99).to_a.reverse.each do |row|
	(0...row).each do |n|
		if nums[row][n].to_i > nums[row][n + 1].to_i then
			nums[row - 1][n] = nums[row - 1][n].to_i + nums[row][n].to_i
		else
			nums[row - 1][n] = nums[row - 1][n].to_i + nums[row][n + 1].to_i
		end
	end
	if nums.count > 1 then
	       	nums.pop
	end
end

print nums



