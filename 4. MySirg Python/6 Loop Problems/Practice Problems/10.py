# LCM of two numbers
import os
os.system("cls")
a = int(input("Enter the 1st value: "))
b = int(input("Enter the 2nd value: "))
l = a if a>b else b                 # (true) IF (condition) ELSE (false)
for i in range(l,a*b+1):
    if i%a==0 and i%b==0:
        print("LCM of",a,"and",b,"is",i)
        break