n=input("Enter the list:")
item=input("Enter an item:")
n=list(map(str.lower,n.split()))
print("Available" if(item.lower() in n) else "not available")
