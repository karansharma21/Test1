# import statements.
from globals import friends
from spy_details import spy
from datetime import date
import re
from termcolor import cprint


# add new friends.
def add_friend():
    new_friend = {
        'name': '',
        'salutation': '',
        'age': 0,
        'rating': 0.0,
        'is_online': False,
        'chats': []
    }


    while True:
        new_friend['name'] = raw_input("Please add your friend's name: ")
        pattern = '^[a-zA-Z\s]+$'
        if (re.match(pattern, new_friend['name']) != None):
            print 'Valid name'
            break
        else:
            print "Invalid name. Try alphabet's only."

    # check whether spy has input something or not
    if len(new_friend['name']) > 0:
        new_friend['salutation'] = raw_input("What should we call you ? : ")
    #using regex for age as number only
        new_friend['age'] = raw_input("Enter your age: ")
        # validate age
        age_pattern = '^[0-9]{1,3}$'  # only maximum 3 digit numerical value is allowed.
        if (re.match(age_pattern, new_friend['age']) != None):
            # valid age
            new_friend['age'] = int(new_friend['age'])
            if (new_friend['age'] > 12 and new_friend['age'] < 50):
                # input spy rating.
                new_friend['rating'] = raw_input("What is your spy rating (Max 10.0): ")
                # validate spy rating
                rating_pattern = '^[0-9]{1,2}[.][0-9]{1}$'
                if (re.match(rating_pattern, new_friend['rating']) != None):
                    # valid rating
                    new_friend['rating'] = float(new_friend['rating'])
                    if (new_friend['rating'] >= spy['rating'] and new_friend['rating'] <= 10.0):
                        new_friend['is_online'] = True
                        # concatination of salutation and name of spy.
                        new_friend['name'] = new_friend['salutation'] + " " + new_friend['name']
                        new_friend['is_online'] = True
                        friends.append(new_friend)
                        cprint('Friend Added!', 'grey', attrs=['bold'])
                        # returning total no of friends.
                        return len(friends)
                    else:
                        print "friend rating must be greater than user rating"
                        add_friend()
                else:
                    print "Invalid rating. Try again with correct details."
                    add_friend()
            else:
                print "Age must be between 12 to 50 years"
                add_friend()
        else:
            print "Invalid age. Try again with correct details."
            add_friend()
    else:
        print "Invalid name. Try again with correct details."
        add_friend()
