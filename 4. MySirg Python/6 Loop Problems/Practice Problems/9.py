# Prime or Not
import os
os.system("cls")
n = int(input("Enter the number: "))
check = 1
if n<4:
    print("Prime Number")
else:
    for i in range(2,n):
        if n%i==0:
            check = 0
            break
    if check:
        print("Prime Number")
    else:
        print("Not Prime Number")