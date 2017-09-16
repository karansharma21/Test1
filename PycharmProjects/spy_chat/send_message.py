from select_friend import select_friend
from steganography.steganography import Steganography
import datetime
from globals import friends
from termcolor import cprint
from termcolor import colored
from special_words import send_message_help
import re
import time

def send_message():
    if len(friends) != 0:
        # choose a friend from the list.
        friend_choice = select_friend()

        # prepare the message
        original_image = raw_input("Provide the name of the image to hide the message : ")
        #regex for jpeg format original_image only
        pattern_e = '^[a-zA-Z0-9]+\.jpg$'
        if (re.match(pattern_e, original_image) != None):
            output_image = raw_input("Provide the name of the output image  : ")
            #regex for jpeg format output_image only
            pattern_f = '^[a-zA-Z0-9]+\.jpg$'
            if (re.match(pattern_f, output_image) != None):
                cprint( "Images name entered successfully", 'magenta')
            else:
                cprint ("Wrong output_image name/format entered",'red')
                send_message()
        else:
            cprint ("Wrong original_image name/format entered",'red')
            send_message()
        while True:
            text = raw_input("Enter your message here : ")
            #regex for encrypted message
            pattern = '^[a-zA-Z0-9\s]+$'
            if (re.match(pattern, text) != None):
                cprint ('Valid message','magenta')
            else:
                cprint ('Either empty message or invalid messsage',"red")
                cprint( 'Again choose the friend from the list:', "cyan")
                send_message()
            #checks the length of message from spy
            if len(text) <= 100:
                break
            else:
                #a spy is deleted from list of spies if they are speaking too much. (More than 100 words)
                cprint("Too much info - Your message must be less than 100 words, you are thrown out of the app","red")
                friends.pop(friend_choice-1)
                cprint ('Again choose the friend from the list:',"cyan")
                send_message()
        #average number of words spoken by a spy
        average = len(text.split())
        cprint ("Average number of words are %d" % (average),'magenta')
        # Encrypt the message
        Steganography.encode(original_image, output_image, text)
        # Successful message
        cprint ("Your message encrypted successfully.",'blue')

        # converting text into upper case
        new = (text.upper()).split()

        # if Emergency words present\
        if "SOS" in new or "SAVE" in new or "HELP" in new or "ACCIDENT" in new or "ALERT" in new:
            # Emergency alert
            # Termcolor and Colorama both libraries happily used.
            print (colored("!", 'red', 'on_yellow')),
            print (colored("!", 'red', 'on_yellow')),
            print (colored("!", 'red', 'on_yellow'))

            # help friend by sending a helping message
            print (colored("The friend who sent this message need your help.", 'cyan'))
            print (colored("You can help your friend by sending helping message.", 'cyan'))
            print (colored("Select the friend to send helping message", 'red'))

            # calling the send message help function
            send_message_help()

            # the message has been sent successfully
            print (colored("You just sent a message to help your friend.", 'magenta'))
        else:
            cprint("No Help required", "blue")

            # save the messages
        new_chat = {
            "message": text,
            "time": time.strftime("%I:%M:%S"),
            "day": datetime.date.today().strftime("%d"),
            "month": datetime.date.today().strftime("%B"),
            "year": datetime.date.today().strftime("%Y"),
            "sent_by_me": True

        }
        friends[friend_choice]['chats'].append(new_chat)

        cprint ("your secret message is ready.",'yellow')
    else:
        cprint("You don't have any friends yet","cyan",attrs=['dark', 'underline', 'bold'])