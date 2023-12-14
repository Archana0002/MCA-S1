s=input('Enter the string:')
chr=s[0]
s=s.replace(chr,"&")
s= chr+s[1:]
print('Final string :',s)
