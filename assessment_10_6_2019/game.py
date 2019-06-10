outcome = {'RP' : -1 ,'RR' : 0 , 'SS' : 0 , 'PP' : 0, 'RS' : 1 , 'PS' : -1 , 'PR' : 1 , 'SR' : -1 , 'SP' : 1}

def match_outcomes(matchs) :
    ListOfMatchs = matchs.split(', ') ;
    win = 0
    loss = 0
    draw = 0

    for i in ListOfMatchs :
        if i == -1 :
            loss+=1
        elif i == 1 :
            win+=1
        else :
            draw+=1

    print(win)
    print(loss)
    print(draw)

InputMatches = input()
print(InputMatches)
match_outcomes(matchs)