fn=raw_input('Enter Your First Name')
ln=raw_input('Enter Your Last Name')
a=[fn, ' ', ln ]
t=''.join(reversed(a[0]+a[1]+a[2]))
print t