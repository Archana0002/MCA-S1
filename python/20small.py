a=input("Enter the number:")
b=list(map(int,a.split(',')))
s=min(b)
print(s)
n=[]
for i in b:
  if(i>s):
    n.append(i)
print(min(n))
