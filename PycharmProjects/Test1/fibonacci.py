a=int(raw_input("Enter Your First Number:   "))
b=int(raw_input("Enter Your Second Number:  "))
num=int(raw_input("Enter Number of terms of Fibonacci You want: "))
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