# Create a List of First n odd natural numbers
import os
os.system("cls")
li = []
[li.append(i) for i in range(1,1+(int(input("Enter the value of n: "))),2)]
# OR
li2 = [2*i-1 for i in range(1,1+(int(input("Enter the value of n: "))),2)]

# Printing
[print(i,end=' ')for i in li2]