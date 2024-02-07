def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        factofn=n*fact(n-1)
        return factofn

n = int(input("n="))
r = int(input("r="))
m = int(input("m="))

combi=fact(n)/(fact(n-r)*fact(r))
combim=combi%m
print(combim)