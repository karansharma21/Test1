import random

print 'Welcome TO Play Guessing Game'
spy_name = raw_input('Enter your Name: ')
gen =raw_input('Select Gender M or F:  ')
z=['Mr.' , 'Ms.']
if(str(gen)== 'M'):
    spy_name = z[0] + " " + str(spy_name)
elif(str(gen)== 'F'):
    spy_name = z[1] + " " + str(spy_name)
else:
    print 'Wrong Gender/Unspecified Gender'
num = random.randint(1,8)
count_win = 0
count_loose = 0
choice = 'Y'
while (choice.upper() != 'N'):
    a = int(raw_input(str(spy_name) + " " + 'enter Your Number From 1 to 9:   '))

    if (a < num and a > 0 and a < 10):
        print str(spy_name) + " " + 'Your Guess is Low:    ' + str(a)
        count_loose += 1
    elif (a > num and a > 0 and a < 10):
        print str(spy_name) + " " + 'Your Guess is High:   ' + str(a)
        count_loose += 1
    elif (a == num and a > 0 and a < 10):
        print str(spy_name) + " " + 'Your Guess is Perfect:    ' + str(a)
        count_win += 1
    else:
        print 'Wrong Input Given:   ' + str(a)

    print spy_name + " Your number of Perfect Guess: " + str(count_win)
    print spy_name + " Your number of non perfect Guess: " + str(count_loose)
    print 'The original Number was: ' + str(num)
    choice = raw_input('Do You want to Guess More? Y or N:   ')
