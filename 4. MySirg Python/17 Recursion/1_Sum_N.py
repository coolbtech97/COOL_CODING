# sum of n natural numbers
import os
os.system("cls")
n = int(input("Enter a number: "))
def sum(n):
    if not n:
        return 0
    return n+sum(n-1)
print("Sum is",sum(n))