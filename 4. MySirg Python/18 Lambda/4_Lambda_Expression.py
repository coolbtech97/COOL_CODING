# Lambda Expression is a function

lambda a,b:a+b      # NO MEANING

sum = (lambda a,b:a+b)(5,7)
print(sum)


# These types of function is only used for once.
# We Can Also Give It A Reference

f1 = (lambda a,b:a+b)       # IMP NOTEE
# means     (lambda a,b:a+b)(5,7)
# can use       f1(5,7)