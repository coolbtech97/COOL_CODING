# Write a Python Script to print first N even natural numbers
import os
os.system("cls")
for n in range(2,(int(input("Enter the value of N: "))*2+1),2):
    print(n,end=' ')