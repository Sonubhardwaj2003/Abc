a=[10,20,30,40,20,50,30]
b=[] 
for i in a:
    if a.count(i)>1 and i not in b:
        b.append(i)
print("duplicate elements are :",b)        


# a=[10,20,30,40,20,50,30]
# for i in a:
#     if a.count(i)>1 :
#         a.remove(i)
# print("new list elements are :",a)    
