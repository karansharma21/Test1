current_status_message = None
update_status_message = None
new_status= raw_input("Enter Your New Status")
List=["abc", "true"]
choice= 'Y' or 'y'
counter=1
def add_status(current_status_message):

    if current_status_message != None:
        print "Your current status message is : " + current_status_message + "\n"

        if len(new_status) >0:

            List.append(new_status)
        else: print " Empty Sting "
    else:
        print "You don't have any current status message" + "\n"


add_status(new_status)
for new_status in List:

    print str(counter) + " " + new_status
    counter = counter + 1

a=len(List)
print "Number of status you updated are:" + str(a)

def_add_friend():
    new_name= raw_input()