"""
SYNTAX:
        FOR (variable) IN (iterable-sequence):
            code
            code

WHILE is used undictionally repeats a block of code.

FOR iterates N times, where n is number of elements in a sequence.

(iterable-sequence)== Group of variable
                      list, str,tuple,range...

ex- for i in "ANAND":
                            the loop will run 5 times, anand is group of 5 elements
                            and i variable will get character 1 by 1
                            """

import os
os.system('cls')

for i in "ANAND":
    print("HI",end=" ")
    print(i)
    