import os
op=open("hi.txt","r")
ls=op.read().split()
ls.sort(key=len,reverse=True)
length=len(ls[0])
print("maximum length of word is ",length)
[print(x) for x in ls if len(x)==length]
op.close()
