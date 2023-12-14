def rev_name(name):
    for word in name[::-1]:
        print(word,end=' ')
n=input("Enter the full name:").split()
rev_name(n)
