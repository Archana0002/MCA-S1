def sum_list(l):
    sum=0
    for i in l:
        sum+=i
    return sum

l=input("Enter comma seperated elements:")
l=list(map(int,l.split(',')))
print("sum of eleemnts:",sum_list(l))
