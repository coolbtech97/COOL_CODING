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