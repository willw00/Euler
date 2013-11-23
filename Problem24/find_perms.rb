n = 0
a = Array.new(10) {n+=1; n - 1}
print "Enter required permutation: "
num = gets.chomp.to_i
puts "You want permutation #{num} of #{a}"
def find_perms(a,num_perms)
	length = a.size
	x = 0
	while x < num_perms 
		j = length - 2 
		while (j >= 0) and (a[j]  >= a[j+1]) 
		j -= 1
		end
		
		if j < 0 then
			puts "Already at max (#{x}) permutation, #{a}!"
			return a
		end	

		i = length - 1
		while (i > j) and (a[i] < a[j]) 
		i -= 1
		end

		a[j], a[i] = a[i], a[j]
		a = a.take(j+1) + a[j+1..a.index(a.last)].reverse

		x += 1
		#puts "#{x},   #{a}"
	end
	print a
end

find_perms(a,num)

