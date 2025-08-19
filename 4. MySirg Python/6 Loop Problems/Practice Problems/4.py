# Write a python script to print squares of first N natural numbers
import os
os.system("cls")
for i in range(1,int(input("Enter the value of N: "))+1):
    print(i,'*',i," = ",i**2)