#The number is a three digit number or not
import os
os.system('cls')
n=int(input("Enter the number: "))
if not n//10:
    print("Not 3 digit number")
elif not n//100:
    print("Not 3 digit number")
elif not n//1000:
    print("3 digit number")
else:
    print("Not 3 digit number")