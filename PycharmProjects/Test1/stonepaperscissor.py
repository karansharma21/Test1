print 'Welcome TO Play Stone Paper Scissor Game'
spy_name1 = raw_input('Player 1, Enter your Name: ')
spy_name2 = raw_input('Player 2, Enter your Name: ')
count_win1=0
count_win2=0
choice = 'Y'
while(choice != 'N'):
    a = str(raw_input(spy_name1 + " " + 'enter Your choice From Stone, Paper or Scissor:   '))
    b = str(raw_input(spy_name2 + " " + 'enter Your choice From Stone, Paper or Scissor:   '))
    if(str(a) == 'Stone' and str(b) == 'Scissor'):
        print 'Hahahaha' + " "  + str(spy_name1) + " " + 'wins'
        count_win1 +=1
    elif str(a) == 'Paper'and str(b) == 'Stone':
        print 'Hahahaha' + " "  + str(spy_name1) + " " + 'wins'
        count_win1 += 1
    elif (str(a) == 'Scissor'and str(b) == 'Paper'):
        print 'Hahahaha' + " " + str(spy_name1) + " " + 'wins'
        count_win1 += 1
    elif (str(a) == str(b)):
        print 'Draw/Tie Game'
    else:
        print 'Hahahaha' + " " + str(spy_name2) + " " + 'wins'
        count_win2 += 1
    print spy_name1  + " : " + str(count_win1)
    print spy_name2 + " : " + str(count_win2)
    choice =raw_input( 'Do You want to play More? Y or N:   ')


