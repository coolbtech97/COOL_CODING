# Prime or not
import os
os.system('cls')
n=int(input("Enter the number: "))
i=2
c=1
while i<n:
    if n%i==0:
        c=0
        break
    i+=1
if c:
    print("Prime Number")
else:
    print("Not Prime")