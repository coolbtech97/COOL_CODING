# ALL VARIABLES AND FUNCTIONS CREATED IN A CLASS IS KNOWN AS ""Attributes""
# [CLASS IS AGROUP OF VARIABLES AND FUNCTIONS]
#     [THESE VARIABLES AND FUNCTIONS ARE KNOWN AS ATTRIBUTES]

# List is a Class
# List is an iterable sequence
# List is mutuable    [Value can Change]
# List is growable    [Size can Change]
# List can store heterogeneous data   [Store String,Int,Float,etc.. AT ONCE]
#                                     store different Elements
# Index start with 0
#     Also Allow NEGATIVE INDEXING

# Create list
li=[]               # empty allowed
l2=[10,20,"Anand"]  # Store different Datas

print(l2[0])    # 10

# NEGATIVE INDEXING
print(l2[-1])       # Prints Last Element

for x in li:
    print(x,end=' ')

i=0
while i<=5:
    print(li[i],end=' ')
    i+=1

# DELETE ELEMENT
del l2[2]
for i in li:#Dont read this line
# LIST SIZE INCREASE
# 1. append()
    li.append(100)  # Adds 100 at the end of the list
# 2. insert()
    li.insert(1, 50)  # Inserts 50 at index 1
    li.insert(0, "Start")  # Inserts "Start" at the beginning
    li.insert(len(li), "End")  # Inserts "End" at the end
    # If list size is 4 and, I inserts "anand" at 200 Index position
    #                             "anand" will go to the LAST index, NOT 200th index
    li.insert(200, "anand")  # Inserts "anand" at last index
    #  [If index > last index ,  Then value will store at Last index +1  (Only append()) ].
# 3. extend()
    li.extend([200, 300])  # Adds multiple elements at the end of the list
