# List Can be also assigned like this
# list()    Nothing is Fine
# list(r)   1 is Fine [ Itterable Sequence hona chaiye ]
r = range(10)

li = list(r)

li2 = list(range(4))    # like i passed range(itterable) to this function

li3 = list('anand')     # like i passed str (itterable) to this function
print(li3)


# Comparision Operator

if li==li2:
    print("Similar")
else:
    print("Different")

if li < li2:
    # compares 1st elements
    # If same, then compare next one - next one
    print()

# Concatenation Operator
li += li2               # li = li+li2