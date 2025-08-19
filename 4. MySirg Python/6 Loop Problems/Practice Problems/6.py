# Write a python script to calculate factorial of a number
import os
os.system("cls")
n = int(input("Enter the number: "))
fact = 1
while n:
    fact*=n
    n-=1
print(fact)