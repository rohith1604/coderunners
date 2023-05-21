valid_values = (12, 30, 1997, 11, 12, 1999)
int_list = [ ] 
max_length = int(input("enter the length of the list: "))
while len(int_list) < max_length:
 while True:
 try:
    item = int(input("append an interger into the list: "))
    break
 except ValueError:
     print("error: invalid input")
 if item in valid_values:
     int_list.append(item)
     print(int_list)
print("list of values entered between 1 to 100:")
print(int_list)