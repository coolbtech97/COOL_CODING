# function name reference
a,b = int(input("Enter two numbers to add: ")),int(input())

def add(a,b):
    return a+b

x = add
# add(a,b)
# x(a,b)    SAME THING NOW, REFERENCE
print(x(a,b))