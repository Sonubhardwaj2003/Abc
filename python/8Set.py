#set is mutable but set element is immutable.it doesent support duplicate value

# a={}
# print (type(a))

# a={50,30,60,90}
# print (type(a))

# a={50,30,60,90}
# print (a)

# a={50,30,60,90}
# a.remove(30)
# print (a)

# a={50,30,60,90}
# a.remove(3)
# print (a)

# a={50,30,60,90}
# a.discard(3)
# print (a)

# a={50,30,60,90}
# a.discard(30)
# print (a)

# a={50,30,60,90}
# b={20,10,"sonu"}
# a.update(b)
# print (a)

# a={50,30,60,90}
# b={20,10,"sonu",90}
# a.union(b)
# print (a)       #no change in element

# a={50,30,60,90}
# b={20,10,"sonu"}
# c=a.union(b)
# # c=a/b   
# print (c)


# a={50,30,60,90}
# b={20,10,"sonu",90}
# a.intersection(b)
# print (a)

# a={50,30,60,90}
# b={20,10,"sonu",90}
# c=a.intersection(b)
# print (c)

# a={50,30,60,90}
# b={20,10,"sonu",90}
# # c=a.difference(b)
# c=a-b
# print (c)

# a={50,30,60,90}
# b={20,10,"sonu",90}
# # c=b.difference(a)
# c=b-a
# print (c)

# a={50,30,60,90}
# b={20,10,"sonu",90}
# c=a.difference_update(b)
# # c=a-b
# print (c)

# a={50,30,60,90}
# b={20,10,"sonu",90}
# a.difference_update(b)
# print (a)

# a={50,10,60,90}
# b={20,10,"sonu",90}
# c=a.symmetric_difference(b)
# print (c)


# a={20,10,50,40,90,80}
# a.sort()
# print(a)                  #sort function not used by set directly.

a={20,10,50,40,90,80}
b=sorted(a)
print(a)
print(b)

a=[20,10,50,40,90,80]
a.sort()
print(a)
