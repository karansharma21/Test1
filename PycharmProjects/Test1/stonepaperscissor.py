print 'Welcome TO Play Stone Paper Scissor Game'
spy_name1 = raw_input('Player 1, Enter your Name: ')
if(len(spy_name1) > 0):
    # logic will be here if condition is true
    spy_name2 = raw_input('Player 2, Enter your Name: ')
    if len(spy_name2) > 0:
        # logic will be here if condition is true
        count_win1 = 0
        count_win2 = 0

        choice = 'Y' or 'y'
        while (choice.upper() != 'N'):
            a = str(raw_input( spy_name1 + " " + 'enter Your choice From Stone, Paper or Scissor:   '))
            b = str(raw_input(spy_name2 + " " + 'enter Your choice From Stone, Paper or Scissor:   '))
            if ((a.lower() == 'stone') and (b.lower() == 'scissor')):
                print 'Hahahaha' + " " + str(spy_name1) + " " + 'wins'
                count_win1 += 1
            elif ((a.lower() == 'paper') and (b.lower() == 'stone')):
                print 'Hahahaha' + " " + str(spy_name1) + " " + 'wins'
                count_win1 += 1
            elif ((a.lower() == 'scissor') and (b.lower() == 'paper')):
                print 'Hahahaha' + " " + str(spy_name1) + " " + 'wins'
                count_win1 += 1
            elif (a.lower() == b.lower()):
                print 'Draw/Tie Game'
            else:
                print 'Hahahaha' + " " + str(spy_name2) + " " + 'wins'
                count_win2 += 1
            print spy_name1 + " : " + str(count_win1)
            print spy_name2 + " : " + str(count_win2)
            choice = raw_input('Do You want to play More? Y or N:   ')