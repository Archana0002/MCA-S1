
s=input("Enter the names seperated by comma:")
name=list(s.split(','))
name=[item.split(' ') for item in name]
count=0
l=[]
print("first names are")
l=[item[0] for item in name]
print(l)
for item in name:
    if(item[0][0]=='a' or item[0][0]=='A'):
        count=count+1
print("Names that start with A is",count)
