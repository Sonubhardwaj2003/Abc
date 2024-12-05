a=[10,20,500,700,9000,40]
print(sum(a))
print(max(a))
print(min(a))

# a=[10,20,500,700,9000,40]
# a.append(300)
# print(a)

# a=[10,20,500,700,9000,40]
# a[3].append(300)
# print(a)                 #give error

# a=[10,20,500,700,9000,40]
# a.insert(2,200)
# print(a)

# a=[10,20,500,700,9000,40]
# a.pop(3)
# print(a)

# a=[10,20,500,700,9000,40]
# a.pop()
# print(a)

# a=[10,20,500,700,9000,40]
# a.remove(500)
# print(a)

# a=[10,20,500,700,9000,40]
# del(a)

# a=[10,20,500,700,9000,40]
# del(a[2])
# print(a)

# a=[10,20,500,700,9000,40]
# del(a)
# a=90
# print(a)

# a=[2,3,4]
# print(3*a)

# a=[10,20,500,700,9000,40]
# a[2]=['sonu',21,91.555]
# print(a)

# a=[10,20,['sonu',21,91.555],500,700,9000,40]
# a[2][2]='chintu'
# print(a)

# a=[10,20,('sonu',21,91.555,500),700,9000,40]
# a[2][2]='chintu'
# print(a)

number=[1,2,3,4,5]
squared=[X**2 for X in number]
print(squared)


number=[1,2,3,4,5]
squared=[X**2 for X in number if X%2!=0]
print(squared)