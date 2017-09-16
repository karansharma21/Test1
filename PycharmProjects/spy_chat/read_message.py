from select_friend import select_friend
from steganography.steganography import Steganography
import datetime
from globals import friends
import time
from termcolor import cprint
import re
from send_message import send_message
def read_message():
    sender = select_friend()

    secret_image = raw_input("Enter encrypted image, only jpg format: ")
    pattern_e = '^[a-zA-Z0-9]+\.jpg$'
    if (re.match(pattern_e, secret_image) != None):
        secret_text = Steganography.decode(secret_image)
        # save the data
        new_chat = {
            "message": secret_text,
                "time": time.strftime("%I:%M:%S"),
                "day": datetime.date.today().strftime("%d"),
                "month": datetime.date.today().strftime("%B"),
                "year": datetime.date.today().strftime("%Y"),
                "sent_by_me": True

        }


        cprint (friends[sender]['name']+ " " + "sends you" +" " + secret_text,'red',attrs=['dark','underline','bold'])
        cprint ("Your secret message has been saved too.",'red',attrs=['dark','underline','bold'])
    else:
        print "Wrong image name/format entered"