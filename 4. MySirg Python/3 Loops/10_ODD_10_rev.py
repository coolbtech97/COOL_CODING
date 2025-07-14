# Print First 10 Odd natural numbers in Reverse order
import os
os.system('cls')
# n=1
# s=""
# i=5
# while i:
#     n+=1
#     if n%2:
#         s+=str(n)
#         i-=1
# for i in reversed(s):
#     print(i,end=" ")
n=int(input("Enter the value of N: "))

n=10

n=2*n+1
while n>2:
    print(n,end=" ")
    n-=2