a=input("Enter the words")
n=int(input("Enter a number"))
s=a.split(',')
for i in range(len(s)):
    if(len(s[i])>n):
        print(s[i])
