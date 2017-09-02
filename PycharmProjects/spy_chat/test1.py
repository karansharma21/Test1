name = raw_input('What is your name?').lower()
valid = False

while not valid:
    if name.isalpha():
        valid = True
        # Do whatever you need to do
    else:
        name = raw_input("Name is invalid, please try again.").lower()