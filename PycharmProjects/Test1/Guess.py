import random
print 'Welcome TO Play Guessing Game'
spy_name = raw_input('Enter your Name: ')
num = random.randint(1,9)
choice = 'Y'
while(choice != 'N'):
    a = int(raw_input(str(spy_name) + " " + 'enter Your Number From 1 to 9:   '))

    if(a<num and a>0 and a<10):
        print str(spy_name) +" "+'Your Guess is Low:    '+str(a)
    elif(a>num and a>0 and a<10):
        print str(spy_name) +" "+'Your Guess is High:   '+str(a)
    elif(a== num and a>0 and a<10):
        print str(spy_name) +" "+'Your Guess is Perfect:    '+str(a)
    else:
        print 'Wrong Input Given:   '+str(a)
    print 'The original Number was: ' +str(num)
    choice =raw_input( 'Do You want to Guess More? Y or N:   ')

