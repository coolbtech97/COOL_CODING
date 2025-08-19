# Write a python script to print first 10 odd natural numbers
import os
os.system("cls")
for num in range(3,(int(input("Enter the value of N: "))*2)+2,2):
    print(num,end=" ")