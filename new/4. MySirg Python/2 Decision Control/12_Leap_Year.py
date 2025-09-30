#Leap year or not
# if(n%400==0)||(n%4==0 && n%100!=0)
import os
os.system("cls")
n=int(input("Enter the year: "))

if (not n%400)or(not n%4 and n%100):
    print("Leap Year")
else:
    print("Not Leap Year")