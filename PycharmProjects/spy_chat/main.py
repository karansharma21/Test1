# import statements
from datetime import datetime
import re
from spy_details import spy
from spy_chat1 import start_chat

print "Welcome to Spy_chat"
question = "Do you want to continue as " + spy['salutation'] + " " + spy['name'] + " (Y/N): "
existing = raw_input(question)

# validating users input
if (existing.upper() == "Y") :
    # user wants to continue as default user.

    # giving salutation to the name of spy
    spy['name'] = spy['salutation'] + " " + spy['name']

    # starting chat application.
    start_chat(spy['name'], spy['age'], spy['rating'], spy['is_online'])
elif (existing.upper() == "N"):
    # user wants to continue as new user
    #using regex for name as characters only
    while True:
        spy['name'] = raw_input("Enter your name : ")
        pattern = '^[a-zA-Z\s]+$'
        if (re.match(pattern, spy['name']) != None):
            print 'Valid name'
            break
        else:
            print "Invalid name. Try alphabet's only."

    # check whether spy has input something or not
    if len(spy['name']) > 0:
        spy['salutation'] = raw_input("What should we call you ? : ")
    #using regex for age as number only
        while True:
            spy['age'] = int(raw_input("Enter your age : "))
            pattern = '^[0-9]+$'
            if (re.match(pattern, spy['age']) != None):
                if (spy['age']>12) and (spy['age']<50):
                    print 'Valid age'
                    break
                else:
                    print"invalid"
                break
            else:
                print "Invalid age. Try digits only."
        # concatination of salutation and name of spy.
        spy['name'] = spy['salutation'] + " " + spy['name']

        while True:
            try:
                # converting users input to float (typecasting)
                spy['rating'] = float(
                    raw_input("What is your spy rating?"))
                break
            except ValueError:
                print "Invalid rating. Try again."
        spy['is_online'] = True

        # starting chat application.
        start_chat(spy['name'], spy['age'], spy['rating'], spy['is_online'])
    else:
        print "Invalid name. Try again."
else:
    print "Wrong choice. Try again."