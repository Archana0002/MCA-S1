def fibo(n):
    a,b=0,1
    for i in range(n):
        a,b=b,a+b
    return a
n=int(input("Enter number:"))
print("%d th fibonacci numbers is %d" %(n,fibo(n)))
