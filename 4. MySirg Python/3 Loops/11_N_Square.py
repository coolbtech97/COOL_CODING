# Print Squares of First N Natural numbers
import os
os.system('cls')
n=int(input("Enter the value of N: "))
i=1
while i<=n:
    print(i,"*",i,"=",i**2)
    # print(i*i,end=' ')
    i+=1