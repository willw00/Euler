 f1 = 1
 f2 = 1
 numsize = 1
 term = 2
 new = 0
 while (numsize < 1000) do 
	new = f1 + f2
	f1 = f2
       	f2 = new	
	numsize = new.to_s.split(//).size
	term+=1
 end

 puts term
