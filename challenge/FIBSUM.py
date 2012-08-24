p=5**.5;f=lambda n:((1+p)**n-(1-p)**n)/(2**n*p)
exec"n=input();print int(f(n+11)-f(n+1)+f(n+6)%10);"*input()
