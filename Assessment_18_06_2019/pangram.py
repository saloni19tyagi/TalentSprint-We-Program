import string
letter_count = dict(zip(string.ascii_lowercase, [0]*26))

def is_pangram(s) :
    for ch in s: 
        letter_count[ch] = letter_count.get(ch, 0) + 1
    for count in letter_count :
        if letter_count[count] == 0 :
            return 0

    return 1

s = "Pack my box with five dozen liquor jugs"
s = s.lower() 
if(is_pangram(s)) :
    print("String is Pangram") 
else :
    print("String is not pangram")
