# import statements
#from globals import current_status_message
from add_status import add_status
from add_friend import add_friend
from send_message import send_message
from chat_history import read_chat
from read_message import read_message
from termcolor import cprint
# start_chat() function definition.
def start_chat(name, age, rating, status):
    from globals import current_status_message

    welcome_message = "Authentication complete.\n" \
                      "Name : " + name + "\n" \
                      "Age: " + str(age) + "\n" \
                      "Rating: " + str(rating) + "\n" \
                      "Online: " + str(status) + "\n" \
                      ""
    cprint( welcome_message,'magenta',attrs=['bold','underline'])

    # displaying menu for user.
    show_menu = True
    while show_menu:
        menu_choices = "What do you want to do? \n " \
                       "1. Add a status update \n " \
                       "2. Add a friend \n " \
                       "3. Send a secret message \n " \
                       "4. Read a secret message \n " \
                       "5. Read Chats from a user \n " \
                       "6. Close Application \n"
        flag = True
        while flag:
            try:
                result = int(raw_input(menu_choices))
                flag = False
            except Exception:
                print "Invalid choice. Try again."
            else:
                # validating users input
                if (result == 1):
                    current_status_message = add_status(current_status_message)
                elif (result == 2):
                    number_of_friends = add_friend()
                    cprint ( 'You have %d friends' % (number_of_friends), 'yellow', attrs=['dark','underline','bold'])
                elif (result == 3):
                    send_message()
                elif (result == 4):
                    read_message()
                elif (result == 5):
                    read_chat()
                elif (result == 6):
                    print "THANK YOU. VISIT AGAIN"
                    # close application
                    exit()
                else:
                    print "wrong choice try again."