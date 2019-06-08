import sys

def interleaving(str1 ,str2) :
    if len(str1) == 0 :
        return str2
    if len(str2) == 0 :
        return str1
    else :
        return str1[0] + str2[0] + interleaving(str1[1:],str2[1:])



str1 = sys.argv[1]
str2 = sys.argv[2]

interleave = interleaving(str1 , str2)
print(interleave)
