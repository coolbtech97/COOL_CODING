# Prime or not
import os
os.system('cls')
n=int(input("Enter the number: "))
i=2
c=1
while i<n:
    if n%i==0:
        print("Not Prime")
        break
    i+=1
else:
    print("Prime Number")



#Loop ends without BREAK, ELSE will run

#Loop ends by BREAK, ELSE will not run