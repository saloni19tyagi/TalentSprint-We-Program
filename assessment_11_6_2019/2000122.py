def irle(ShorterStr) :
    ch = 0
    OriginalStr = ""

    while ch < len(ShorterStr) :
        count_occ = 0
        while ShorterStr[ch].isdigit() :
            count_occ = count_occ*10 + int(ShorterStr[ch])
            ch+=1
        for i in range(0 , count_occ-1):
            OriginalStr += ShorterStr[ch]
        OriginalStr += ShorterStr[ch]
        ch+=1

    return OriginalStr


def IsEqual(OriginalStr , ch) :
	return OriginalStr[ch] == OriginalStr[ch+1]

def rle(OriginalStr) :

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
ShorterString = (rle(OriginalStr))
print(ShorterString)
print(irle(ShorterString))