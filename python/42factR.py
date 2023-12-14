def factorial(n):
    if n==1:
        return 1
    else:
        return n * factorial(n-1)
n=int(input("Enter number:"))
print('factorial of ' , n , ' = ' ,factorial(n))
