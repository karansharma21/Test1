num=int(raw_input('Enter Number of terms of Fibonacci You want: '))
a=1
b=1
c=a+b
if num>=1:
    print a

if num>=2:
    print b

while(num>=3):
    print c
    temp=a
    a=b
    b=c
    c=a+b
    num=num-1