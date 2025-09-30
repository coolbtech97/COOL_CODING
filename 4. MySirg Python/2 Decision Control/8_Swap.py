#Swap data of two variables
import os
os.system('cls')
a=int(input("Enter the value of a: "))
b=int(input("Enter the value of b: "))
temp=a
a=b
b=temp
print("Value of a is",a)
print("Value of b is",b)