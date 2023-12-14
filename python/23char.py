a={}
s=input("Enter the character:")
for i in s:
    a[i]=a.get(i,0)+1
print(a)
