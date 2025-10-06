# Built in methods
# can be use in str , range , list , tuple , dict
# no import statement need
'''
len()   returns length of specified iterable
min()   returns min value element
max()                                   not b/w int and complex values or etc....
sum()   returns sum of elements         not b/w int and str or etcc....
sorted()    returns a sorted list of elements
        [ NO CHANGES ON ORIGINAL VALUES ]
        if you pass "str" - IT RETURNS ""LIST""
        if you passs range - IT RETURNS ""LIST""
            IT ALWAYS RETURNS LIST OF SORTED ELEMENTS
'''
import os
os.system("cls")

li = [10,3,30,33,50,36]

print("Length",len(li))
print("Min",min(li))
print("Max",max(li))
print("Sum",sum(li))
print("Sorted",sorted(li))
li = sorted(li)
print(li[0])

# pop() and insert() examples
# pop([index]) -> removes and returns element. If index omitted, removes last element.
# insert(index, value) -> inserts value at given index (no return).
nums = [10, 3, 30, 33, 50, 36]
print("Original nums:", nums)

# pop without index -> removes last item
last = nums.pop()
print("After pop() removed:", last, "->", nums)

# pop with index -> removes element at that index
second = nums.pop(1)  # removes value 3
print("After pop(1) removed:", second, "->", nums)

# insert at index -> inserts without returning a value
nums.insert(1, 99)
print("After insert(1, 99):", nums)

# safe pop with try/except to show common error handling
try:
    nums.pop(100)
except IndexError as e:
    print("Caught IndexError on pop:", e)