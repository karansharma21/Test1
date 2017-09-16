# import statements.
from globals import STATUS_MESSAGES
from termcolor import cprint

# updated status message.
updated_status_message = None

def add_status(current_status_message):
    if current_status_message != None:
        cprint ('Your current status message is %s \n' % (current_status_message),'yellow')
    else:
        cprint ('You don\'t have any status message currently \n','magenta')

    # Ask user for choosing from older older messages.
    default = raw_input("Do you want to select from the older status (y/n)? ")

    if default.upper() == "N":
        new_status_message = raw_input("What status message do you want to set?:\n")

        # validating users input.
        if len(new_status_message) > 0:
            # adding new status message to the list.
            STATUS_MESSAGES.append(new_status_message)
            updated_status_message = new_status_message
            cprint ('Your updated status message is: %s' % (updated_status_message),'yellow')
        else:
            cprint ("You did not provided any status message. Try again.",'magenta')
    elif default.upper() == 'Y':
        # counter for serial number of messages.
        item_position = 1

        # printing all older status messages.
        for message in STATUS_MESSAGES:
            print '%d. %s' % (item_position, message)
            item_position = item_position + 1

        # asking users choice.
        message_selection = int(raw_input("\nChoose from the above messages \n"))

        # validating users input.
        if len(STATUS_MESSAGES) >= message_selection:
            updated_status_message = STATUS_MESSAGES[message_selection - 1]
            cprint ('Your updated status message is: %s' % (updated_status_message),'yellow')
        else:
            cprint ("Invalid choice. Try again.",'magenta')
    else:
        cprint ('The option you chose is not valid! Press either y or n.','magenta')

    return updated_status_message