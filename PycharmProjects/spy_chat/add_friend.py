# import statements.
from globals import friends
from datetime import datetime

# add new friends.
def add_friend():
    new_friend = {
        'name': '',
        'salutation': '',
        'age': 0,
        'rating': 0.0,
        'is_online': False
    }
    while True:
        try:
            new_friend['name'] = str(raw_input("Please add your friend's name: "))
        except Exception:
            print 'Invalid Name'
        else:
            break


    new_friend['salutation'] = raw_input("Are they Mr. or Ms.?: ")

    # concatination.
    new_friend['name'] = new_friend['salutation'] + " " + new_friend['name']

    new_friend['age'] = int(raw_input("Age? "))

    new_friend['rating'] = float(raw_input("Spy rating? "))

    # users input validations
    if len(new_friend['name']) > 0 and new_friend['age'] > 12 and new_friend['age'] < 50:
        new_friend['is_online'] = True
        friends.append(new_friend)
        print 'Friend Added!'
    else:
        print 'Sorry! Invalid entry. We can\'t add spy with the details you provided'

    # returning total no of friends.
    return len(friends)