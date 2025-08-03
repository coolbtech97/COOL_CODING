# Print Mysirg 5 times on the screen
import os
os.system('cls')
i=1
while i<=5:
    print("MySirG",end=' ')
    i+=1
print()
# Print first N natural numbers

#  Using While Loop
i=1
N=int(input("Enter N: "))
while i<=N:
    print(i,end=' ')
    i+=1

# Using For Loop
for i in range(1,N+1):
    print(i,end=' ')