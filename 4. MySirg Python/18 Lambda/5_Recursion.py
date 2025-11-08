# Recursion using Lambda

# Calculate factorial of a number using recursive lambda expression

# def fact(n):
#     if n<=1:
#         return 1
#     return n*fact(n-1)

# MYSELF TRIEDD
fact = (lambda n:1 if n<=1 else n*(fact(n-1)))
print(fact(5))

# BY TEACHER
f = lambda n: 1 if n<=1 else n*f(n-1)
print(f(5))