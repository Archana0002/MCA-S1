def sum(seq):
    if len(seq)==1:
        return seq[0]
    else: return seq[0] + sum(seq[1:])

l=input("Enter the numbers:")
l=list(map(int,l.split()))
print("Sum of elements of list " ,l,"=",sum(l))
