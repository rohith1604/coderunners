def fib(n):
    a=0
    b=1
    s=0
    for x in range(n):
        print(s,end="")
        s=a+b
        b=a
        a=s
#write this next
import fibnacci
num=int(input("enter any number tp print fibonacci series"))
fibonnacci.fib(num)