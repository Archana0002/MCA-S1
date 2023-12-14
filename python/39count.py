def count_str(s):
    count=0
    for item in s:
        if(len(item)>1 and item[0]==item[-1]):
           count+=1
    return count

s=input("Enter collection of strings")
s=s.split()

r=count_str(s)
print(r)
        
