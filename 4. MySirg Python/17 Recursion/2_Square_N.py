# Write a recursive function to calculate sum of
# squares of first n natural numbers
n = int(input("Enter a number: "))
def square(n):
    if not n:
        return n
    return (n*n)+square(n-1)
print(square(n))