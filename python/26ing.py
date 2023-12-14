a=input("Enter a string:")
if(a.lower().endswith("ing")):
    a=a+"ly"
else:
    a=a+'ing'
print(a)
