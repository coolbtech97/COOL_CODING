li = [[1,2,3], [6,5,6], "ANAND"]

print(li[2])

lis = [1,4,5,6,4,34,34,345,6,67,67]
lis.remove(34)   # It remove the 1st 34 only

last = lis.pop() # It remove the LAST element and RETURNS it

lis.clear()  # It clear the whole list

del li  # It delets the List

lis.reverse()   # It reverse the LIST

index = lis.index(67)   # It returns the INDEX of 1st Occurence Only

# Never put unlocated Index , It will show ERROR

100 in lis
#    Return True / False

y = li.index(100)   if 100 in lis else 'not found'
#   [    TRUE   ] [    CONDITION    ]  [  FALSE ]
                                                        # Important Trick
print(y)    # Index / 'not found'

countt = lis.count(100)     # Counts the Occurence of 100

l = sorted(lis)     # Returns a NEW SORTED "LIST"
                        #no changing in real List
l2 = sorted(lis,reverse=True)

lis.sort(li)                    # It sorts the list
lis.sort(li,reverse=True)       # It sorts the list in decending order


#----------------------------------------#

# List Comprehension

for i in range(1,11):
    print(i,end=" ")

[print(i,end=" ") for i in range(1,11)]
# Most Important Trick WOW WOW WOW WOW WOW WOW WOW WOW
