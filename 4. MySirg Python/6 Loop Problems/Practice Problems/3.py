# Write a python script to print first 10 odd natural numbers in reverse
import os
os.system("cls")
for n in range(int(input("Enter the Value of N: "))*2+1,2,-2):
    print(n,end=' ')