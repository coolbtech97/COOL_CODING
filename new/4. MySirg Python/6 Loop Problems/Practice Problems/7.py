# Write a python script to count digits in a given number
import os
os.system("cls")
num = int(input("Enter the number: "))
count = 0
while num:
    count+=1
    num//=10        # // used in python
print(count)