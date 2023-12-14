import os
op=open("hi.txt","r")
ls=op.readlines()
op.close()
n=int(input("enter n for identifying line"))
ls.pop(n-1)
print(ls)
op=open("hi.txt","w")
op.writelines(ls)


op.close()
