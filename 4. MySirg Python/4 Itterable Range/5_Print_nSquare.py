# Print N natural numbers Using Range
import os
os.system("cls")
# for i in range(1,int(input("Enter the value of N: "))+1):
#     print(i,end=" ")


n=int(input("Enter the Value of N: "))
r = range(1,n)
for e in r:
    print(e**2,end=" ")