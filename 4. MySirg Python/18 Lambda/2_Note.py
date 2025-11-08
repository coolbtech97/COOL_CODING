# Lambda is a Keyword
# Lambda expressions are syntactically restricted to a single expression

# SYNTAX->  lambda input : expression

# NO NEED OF 'def' Keyword
import os
os.system('cls')
def add(a,b):
    return a+b

print(add(1,2))

print()

lambda a,b:a+b

print((lambda a,b:a+b)(3,4))  # Calling Lambda Function Directly