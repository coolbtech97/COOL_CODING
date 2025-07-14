# using While and Else
# if WHILE Completes Itteration, then ELSE will run
# if Break stop to loop, ELSE will NOT run

# ELSE will run, when while loop ends automatically WITHOUT BREAK
import os
os.system('cls')
i=1
n=5
while i<n:
    print(i)
    break
    i+=1
else:
    print("ELSE",end=' ')