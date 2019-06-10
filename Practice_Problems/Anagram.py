import sys

def is_anagram(word1, word2) :
    word1 = sorted(word1)
    word2 = sorted(word2)
    return word1 == word2


word1 , word2 = sys.argv[1] , sys.argv[2]
if is_anagram(word1, word2) :
        print("ANAGRAM")
else :
        print("NOT ANAGRAM")