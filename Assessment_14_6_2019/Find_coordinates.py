DIR = {"N" :(0, 1),"S" :(0, -1) ,"E" :(1, 0) ,"W":(-1,0) ,"NE" :(1,1) ,"NW" :(-1, 1) ,"SE" :(1,-1) ,"SW" :(-1,-1)}

def termino(x, y , directions) :
    for i in directions :
        dir = ""
        digit = 0
        for j in range(len(i)) :
            if ord(i[j]) >= 48 and ord(i[j]) <= 57 :
                digit = digit*10 + int(i[j])
            else :
                dir += i[j]

        x1 , y1 = DIR[dir]
        x = x + x1*digit
        y = y + y1*digit
    return x , y
li = ["1N" , "3NW"]
x , y = termino(1, 1,li )
print((x , y))