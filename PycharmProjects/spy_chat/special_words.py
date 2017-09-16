from select_friend import select_friend
from globals import friends
from spy_details1 import ChatMessage

# meathod for send help message
def send_message_help():
    # select friend who had sent an emergency message.
    friends_choice = select_friend()

    # send the helping text message to the friend in emergency.
    text = "Hey, i am there to help you. "

    # the message will be added to chat message class
    new_chat = ChatMessage(text, True)

    # adding the message to friend in emergency
    #friends[friends_choice].chats.append(new_chat)