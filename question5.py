def power(a,b):
    if(b==0):
        return 1
    else:
       return a*power(a,b-1)
a = int(input("a="))
b = int(input("b="))
m = int(input("m="))
pow=int(power(a,b))
powm=pow%m
print(powm)