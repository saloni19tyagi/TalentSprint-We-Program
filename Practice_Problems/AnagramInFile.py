LetterDict = {"E" : 2,"T" : 3,"A" : 5,"O" : 7,"I" : 11,"N" : 13,"S" : 17,"H" : 19,"R" : 23,"D" : 29,"L" : 31,"C" : 37,"U" : 41,"M" : 43,"W" : 47,"F" : 53,"G" : 59,"Y" : 61,"P" : 67,"B" : 71,"V" : 73,"K" : 79,"J" : 83,"X" : 89,"Q" : 97,"Z" :101}

def ProductOfWords(Word) :
    WordProduct = 1
    for i in Word :
        WordProduct = WordProduct*LetterDict[i]
    return WordProduct


def FindAllAnagrams(WordProduct , WordList) :
    AllAnagrams = list()
    for i in WordList :
        if WordProduct == ProductOfWords(i) :
            AllAnagrams.append(i)

    return AllAnagrams


ReadWords = open("sowpods.txt")

SowpodsWords = ReadWords.read()
WordList = SowpodsWords.split('\n')
Word = "PLAY"
WordProduct = ProductOfWords(Word)

print(FindAllAnagrams(WordProduct ,WordList))