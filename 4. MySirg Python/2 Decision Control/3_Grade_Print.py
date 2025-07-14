import os
os.system('cls')

n=int(input("Enter his marks: "))
if n>90:
    print("A Grade")
elif n>80:
    print("B Grade")
elif n>70:
    print("C Grade")
elif n>60:
    print("D Grade")
elif n>=50:
    print("E Grade")
else:
    print("F Grade")