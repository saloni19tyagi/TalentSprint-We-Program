import string
letter_count = dict(zip(string.ascii_lowercase, [0]*26))

def CalculateImpurityIndex(s) :
    impurity = 0.00 
    for ch in s: 
        letter_count[ch] = letter_count.get(ch, 0) + 1

    for count in letter_count :
        if letter_count[count] > 3 :
            impurity += 3
        elif letter_count[count] > 2 :
            impurity += 2
        elif letter_count[count] == 2 :
            if letter_count in ('a' , 'e' , 'i' , 'o' , 'u') :
                impurity += (0.5)
            else :
                impurity += (0.7)
    return impurity

impurity_index = CalculateImpurityIndex("Saloni Tyagi") 
print(impurity_index)