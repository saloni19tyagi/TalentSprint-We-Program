def isAmbiguous(inputDateString):
    dateStringArray = inputDateString.split('/')

    first = int(dateStringArray[0])
    second = int(dateStringArray[1])

    if first <= 12 and second <= 12:
        return True
    else:
        return False



inputDateString = input()
if isAmbiguous(inputDateString):
    print("Date is ambiguous")
else:
    print("Date is not ambiguous")