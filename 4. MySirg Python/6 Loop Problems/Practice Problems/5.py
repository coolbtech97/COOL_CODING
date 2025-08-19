# Write a python program to calculate sum of first N natural numbers
import os
os.system("cls")
N = int(input("Enter the value of N: "))
sum = 0
while N:
    sum+=N
    N-=1
print(sum)

# N*(N+1)/2