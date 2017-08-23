while True:
    try:
        a = int(raw_input("Enter Your First Number:   "))
    except Exception:
        print 'Invalid input in a'
    else:
        break
while True:
    try:
        b = int(raw_input("Enter Your Second Number:  "))
    except Exception:
        print 'Invalid input in b'
    else:
        break

while True:
    try:
        num = int(raw_input("Enter Number of terms of Fibonacci You want: "))
    except Exception:
        print 'Invalid input in num'
    else:
        break

print type(num)
num=str(num)
print type(num)
num = int(num)
print type(num)
#just checking the use of type function for datatype

print a
print b
c=a+b
while(num>=3):
    print c
    temp=a
    a=b
    b=c
    c=a+b
    num=num-1