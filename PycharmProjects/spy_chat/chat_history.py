from globals import friends
from select_friend import select_friend
from termcolor import cprint, colored


def read_chat():
    # Checking friend list
    if len(friends) != 0:
        friend_choice = select_friend()
        # Getting all details about message like date, time, sender
        for x in friends[friend_choice]['chats']:
            date = (x['day'])+" " + (x['month']) + " " + (x['year'])
            cprint(date, "yellow", attrs=['bold'])
            time = "'" + (x['message']) + "'" + " at" + " time : " + (x['time'])
            colored(time, "magenta", attrs=['bold'])
            cprint( friends[friend_choice]['name'] + " sends you " + time + "\n",'cyan',attrs=['dark','bold'])
    else:
        cprint("you don't have any friends yet", "red")