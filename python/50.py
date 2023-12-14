def sum(n):
  if not(n//10):
      return n
  else:
      return (n%10) + sum(n//10)


n=int(input("Enter the digit:"))
print("Sum of digits of a number:",sum(n))
