import sys

def merge(str , it) :
    merge_str = ""
    while it < len(str) :
        merge_str += str[it]
        it = it+1
    return merge_str

def interleaving(str1 ,str2) :
    interleaved_str = ""
    it1 = 0
    it2 = 0
    while it1 < len(str1) and it2 < len(str2) :
        interleaved_str += str1[it1]
        interleaved_str += str2[it2]
        it1 = it1+1 ;
        it2 = it2+1 ;

    interleaved_str += merge(str1 , it1) ;
    interleaved_str += merge(str2 , it2) ;

    return interleaved_str ;


str1 = sys.argv[1]
str2 = sys.argv[2]

interleave = interleaving(str1 , str2)
print(interleave)
