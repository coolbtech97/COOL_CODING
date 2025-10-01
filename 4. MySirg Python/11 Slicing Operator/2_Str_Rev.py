# Write a python script to reverse a given string word wise
# i am anand kumar
# i ma dnana ramuk

# s = 'i am anand kumar'
import os
os.system('cls')
s= input('Enter the string to get reverse word by word: ')
l1=s.split(' ')
l2=[i[::-1] for i in l1]
s2=' '.join(l2)
print(s2)