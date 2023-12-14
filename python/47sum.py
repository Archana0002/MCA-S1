def sum_whole(n):
    if n==0:
        return 0
    else:
        return n+sum_whole(n-1)
n=int(input("enter a number"))
sum=sum_whole(n-1)
print("sum=",sum)
