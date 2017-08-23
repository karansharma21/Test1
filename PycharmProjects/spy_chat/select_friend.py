from globals import friends
from datetime import datetime
print datetime.now()
text = raw_input("Enter your message: ")
new_chat= {
    "message": text,
    "time": datetime.now(),
    "sent_by_se": True
}
friends[friends[1]]['chats'].append(new_chat)
print "Your secret message is ready"