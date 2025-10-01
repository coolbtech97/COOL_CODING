import os
os.system('cls')
# Convert List of Strings into List of Int
s = '22,33,44,55'
# s=int(s)  # This is Wrong
s2=s.split(',')
# s2 stores List [22 , 33 , 44 , 55]

li = [int(i) for i in s2]
# Converting This List into List of Int
[print(i,end=' ') for i in li]
# Printing


# OR
# All in One line
li = [int(i) for i in input('\nEnter numbers separated by Comma: ').split(',')]
#                                                                 ````````````

#-------------------------------------------------------------------

# JOIN
