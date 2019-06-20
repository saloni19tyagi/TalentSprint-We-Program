def find_max_power_of_2(n :int) ->int :
    while num != 1 :

        if num % 2 == 1:
            num = 3 * num + 1

        else:
            num = num/2

		if !(num&(num-1)) :
			max_power_of_2 = max(max_power_of_2, num) ;

	return max_power_of_2 ;

max_power_of_2 = find_max_power_of_2(12) ;
print(max_power_of_2) ;
