def recur_fact(n):
 if n == 1:
 return n
 else:
 return n*recur_fact(n-1)
num = int(input("Enter a number: "))
# check is the number is negative
if num < 0:
 print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
 print("The factorial of 0 is 1")
else:
 print("The factorial of",num,"is",recur_fact(num))