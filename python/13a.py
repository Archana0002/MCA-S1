a=input("Enter numbers seperated by comma")
a=list(map(int,a.split(',')))
print("part A")
pos=[item for item in a if(item>0)]
print(pos)

print("part B")
sqr=[item**2 for item in a]
print(sqr)

print("part C")
vowels=['a','A','e','E','i','I','o','O','u','u']
s1=input("Enter a string:")
s2=list(s1)
v=[item for item in s2 if(item in vowels)]
print("vowels are:",v)

print("part D")
noteven=[item for item in a if(item%2==1 or item<=0)]
print("not even",noteven)

print("part E")
year=int(input("Enter year"))
leap=[i for i in range(2023,year) if(i%400==0) or (i%100!=0) and (i%4==0)]
print("Leap years",leap)
                
