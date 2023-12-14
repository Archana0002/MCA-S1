words={}
a=input("Enter the string:")
for i in a.split():
    words[i]=words.get(i,0)+1
print(words)
