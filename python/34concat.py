a=input("Enter a string:")
res=" "
if(len(a)==2):
    res=a*2
elif(len(a)>2):
    res=a[:2]+a[-2:]
print(res)
