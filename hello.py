print("hello, world!")

# compranison of two numbers with the if loop
if 1 > 2:
  print(" five is grater than two!")
  
  
# trying out varibales
# x= 2
# print(x)
# replacing the variable x
x = 1
x = "hello"
print(x)

x = str(3)    # x will be '3'
y = int(3)    # y will be 3
z = float(3)  # z will be 3.0
print(z)


# assiging the vaiables on the same line
a,b,c = "Kwagala","Ian" ,"Aaron"
print(a)
print(b)
print(c)

# Same variable
e=f=g= "magumba"
print(e)
print(f)
print(g)


# unpacking a collection
cars = ["benze","bmw","ford"]
a,b,c=cars
print(a)
print(b)
print(c)

# output multiple variable at once
x = 1
y = 2
z = 3
print(x,y,z)

# using + on numbers/ints
a = 5
b = 3
print(a+b)

# using + on letter
a = "hello"
b = "world"
print(a+b)

# using + on numbers and letters
a = "hello"
b = 5
print(a+str(b))

# using + on numbers and letters
a = "ian"
b = 2
# print(a+b) this brings an error

x = "awesome"
def myfunc():
  x = "fantastic"
  print("Python is " + x)

def myfunc():
print("Python is " + x)