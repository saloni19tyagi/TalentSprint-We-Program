import sys

def interleaving(str1 ,str2) :
    li =  list(zip(str1, str2))
    return "".join([i+j for i, j in li])

str1 = sys.argv[1]
str2 = sys.argv[2]

interleave = interleaving(str1 , str2)
if len(str1) > len(str2) :
    interleave+=(str1[len(str2):])
else :
    interleave+=(str2[len(str1):])

print(interleave)
