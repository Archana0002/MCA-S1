
try:
    a=int(input("Enter a number:"))
    if(a<90 or a>120):
        raise ValueError
    else:
        print(a)
except ValueError:
    print("Abnormal condition")
finally:
    print("Success")
    

        
    
