while True:
    try:
        p = int(raw_input("Enter Your Principal Amount Here:  "))
    except Exception:
        print 'Invalid Amount'
    else:
        break
while True:
    try:
        r = int(raw_input("Enter Rate of Interest Here :   "))
    except Exception:
        print 'Invalid rate of interest'
    else:
        break
while True:
    try:
        t = int(raw_input("Enter Number of Years  "))
    except Exception:
        print 'Invalid Number of years'
    else:
        break


SI=(int(p)*int(r)*int(t))/100
print "Your Simple Interest for" + " " + str(t) +" " + "Year is:" +str(SI)
