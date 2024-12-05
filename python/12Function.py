# #default arguments
def d():
    a=20
    print("1. ",a)
d()    


#Positional arguments
def d(a,b):
    print("2. ",a,b)
d(10,20) 


def d(a,b):
    print("3. ",b,a)
d(10,20) 


def d(a=40,b=30):
    print("4. ",a,b)
d(10,20) 


def d(b,c,a):
    print("5. ",a,b,c)
d(14,45,30)


#key arguments
def d(b,c,a):
    print("6. ",b,a,c)
d(a=10,b="Sonu",c=23.34)   


# def d(c,a):
#     print(a,c)
# d(a=10,b="Sonu",c=23.34)   


# variable length
# 1.arguments
def d(*a):
    print("7. ",a)
d(21,52,"CSE")
d(45,32,32.52)    

#2. key arguments
def d(**a):
    print("8. ",a)
d(COurse='Btech',Branch='CSE')
d(roll=45,roll2=34)


# function inside function
def d():
    a=30
    b=40
    c=50
    d='CSE'
    def n():
        a=10
        print("9. ",a,b,d,c)
    n()    
d()



# Anomyes Function ,function name is not provided
a=lambda a,b:a+b
print("10.",a(2,5))