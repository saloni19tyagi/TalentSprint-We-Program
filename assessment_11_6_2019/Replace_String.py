def IsEqual(OriginalStr , ch) :
	return OriginalStr[ch] == OriginalStr[ch+1]

def ReplaceStr(OriginalStr) :

    ShorterStr = list()
    ch = 0

    while ch < len(OriginalStr) :
        count_occ = 1
        if ch+2 < len(OriginalStr) and IsEqual(OriginalStr, ch) and IsEqual(OriginalStr , ch+1) :
            while IsEqual(OriginalStr , ch) :
                count_occ+=1
                ch+=1
            ShorterStr.append(str(count_occ))
        ShorterStr.append(OriginalStr[ch])
        ch += 1

    return ("".join(ShorterStr))


OriginalStr = input()
ShorterString = (ReplaceStr(OriginalStr))
print(ShorterString)