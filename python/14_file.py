# a=open("f","r")
# print(a.read(5))
# # print(a.readline())
# # print(a.readlines())
# a.close()


# a=open("A","w")
# a.write("hello ! Students")
# print("end")
# a.close()

# a=open("A","a")
# a.write("hello ! Students")
# print("end")
# a.close()

a=open("W","w")
a.write("Hello !! everyone,how are u ? areu understand the concept?")
print(a.tell())
a.close()
a=open("W")
print(a.tell())
print(a.read())
print(a.tell())
print('end')