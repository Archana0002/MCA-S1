
s=input("Enter the collection of strings:")
#big_s=lambda s:[x for x in s.split() if len(x) < 5]
s=list(filter(lambda s:len(s)>5,s.split()))
print(s)
