# import statements
from datetime import datetime
from spy_details import spy
from spy_chat1 import start_chat
from termcolor import cprint
import re

users = {}
stats = ""

cprint("Welcome to Spy chat","cyan",attrs=['dark', 'underline', 'bold'])


def displayMenu():
    stats = raw_input("Are you a registered user? y/n? Press q to quit: ")
    if stats.upper() == 'Y':
        oldUser()
    elif stats.upper() == 'N':
        newUser()
    else:
        exit()

def newUser():
    createLogin = raw_input("Create login name: ")

    if createLogin in users:  # check if login name exists
        cprint("\nLogin name already exist!\n","red",attrs=['dark', 'underline', 'bold'])
    else:
        createPassw = raw_input("Create password: ")
        users[createLogin] = createPassw  # add login and password
        cprint("\nUser created!\n","cyan",attrs=['dark', 'underline', 'bold'])


def oldUser():
    login = raw_input("Enter login name: ")
    passw = raw_input("Enter password: ")

    # check if user exists and login matches password
    if login in users and users[login] == passw:
        print "\nLogin successful!\n"
    else:
        print "\nUser doesn't exist or wrong password!\n"
        displayMenu()  #again ask user to login

while stats != "q":
    displayMenu()

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
        spy['age'] = raw_input("Enter your age: ")
        # validate age
        age_pattern = '^[0-9]{1,3}$'  # only maximum 3 digit numerical value is allowed.
        if (re.match(age_pattern, spy['age']) != None):
            # valid age
            spy['age'] = int(spy['age'])
            if (spy['age'] > 12 and spy['age'] < 50):
                # input spy rating.
                spy['rating'] = raw_input("What is your spy rating (Max 10.0): ")
                # validate spy rating
                rating_pattern = '^[0-9]{1,2}[.][0-9]{1}$'
                if (re.match(rating_pattern, spy['rating']) != None):
                    # valid rating
                    spy['rating'] = float(spy['rating'])
                    if (spy['rating'] >= 0.0 and spy['rating'] <= 10.0):
                        spy['is_online'] = True
                        # concatination of salutation and name of spy.
                        spy['name'] = spy['salutation'] + " " + spy['name']
                        # starting chat application.
                        start_chat(spy['name'], spy['age'], spy['rating'], spy['is_online'])
                    else:
                        print "rating must be between 0.0 to 10.0"
                else:
                    print "Invalid rating. Try again with correct details."
            else:
                print "Age must be between 12 to 50 years"
        else:
            print "Invalid age. Try again with correct details."
    else:
        print "Invalid name. Try again with correct details."
else:
    print "Wrong choice. Try again."