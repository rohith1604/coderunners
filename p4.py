def Find(s , s1):
 n = len(s)
 m = len(s1)
 k = -1
 for i in range(0 , n):
 if s[i:i+m] == s1:
 k = i
 break
 return k
s = "Python Programming" 
s1 = "thon"
print(Find(s , s1))
print(Find(s , 'thons'))