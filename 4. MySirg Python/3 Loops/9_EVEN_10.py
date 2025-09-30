# Print First N Even Numbers
import os
os.system('cls')

n=1
i=int(input("Enter the value of N: "))
while i:
    n+=1
    if not n%2:
        print(n,end=" ")
        i-=1