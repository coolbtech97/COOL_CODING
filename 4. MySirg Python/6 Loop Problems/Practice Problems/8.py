# write a python script to calculate sum of the digits of a gven number
import os
os.system("cls")
num = int(input("Enter the value of N: "))
sum = 0
while num:
    sum+=(num%10)
    num//=10
print(sum)