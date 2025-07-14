# Print Unicode of each character of the string "MySirG"
import os
os.system('cls')

n="MySirG"
# If you want to take the string to be input by the User
# n=input()
for i in n:
    print(ord(i),end='_')