print 'Welcome TO Play Stone Paper Scissor Game'
spy_name1 = raw_input('Player 1, Enter your Name: ')
spy_name2 = raw_input('Player 2, Enter your Name: ')
choice = 'Y'
while(choice != 'N'):
    a = str(raw_input(spy_name1 + " " + 'enter Your choice From Stone, Paper or Scissor:   '))
    b = str(raw_input(spy_name2 + " " + 'enter Your choice From Stone, Paper or Scissor:   '))
    if(str(a) == 'Stone' and str(b) == 'Scissor'):
        print 'Hahahaha' + " "  + str(spy_name1) + " " + 'wins'
    elif str(a) == 'Paper'and str(b) == 'Stone':
        print 'Hahahaha' + " "  + str(spy_name1) + " " + 'wins'
    elif (str(a) == 'Scissor'and str(b) == 'Paper'):
        print 'Hahahaha' + " " + str(spy_name1) + " " + 'wins'
    elif (str(a) == str(b)):
        print 'Draw/Tie Game'
    else:
        print 'Hahahaha' + " " + str(spy_name2) + " " + 'wins'
    choice =raw_input( 'Do You want to play More? Y or N:   ')


