def factorial(n):
 fact=1
 for i in range(n,0,-1):
     fact*=i
 return fact

n=int(input("Enter the number:"))
print("Factorial of %d is %d" %(n,factorial(n))) if n>0 else print("factorial could not be computed")
