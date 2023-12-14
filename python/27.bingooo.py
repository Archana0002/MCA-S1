r=input("Enter a string:")
a=[x for x in r if len(x)==len(max(r,key=len))]
if(len(r)>1):
   print('bingo')
