a=input("Enter a string:")
a=a.split()
a.sort(key=len,reverse=True)
print(len(a[0]))
if(len(a[0])==len(a[1])):
    print('BINGO')

