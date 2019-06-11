def FindAbsent(ListOfRollNum) :
    ListOfRollNum.sort()
    AbsentRollNum = 0
    for i in ListOfRollNum :
        diff = i - AbsentRollNum
        if diff != 1 :
            break ;
        AbsentRollNum = i

    return (AbsentRollNum+1)

ListOfRollNum = [2, 1, 5, 6, 4]
print(FindAbsent(ListOfRollNum))