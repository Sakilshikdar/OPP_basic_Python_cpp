
# class Student:
#     def display(name):
#         return name


# a= Student.display('sakil')
# print(a)



class A:
    pass

def display(self):
    print("Hello")

A.abe = display
A.value = 5

obj = A()
print(obj.abe())

print(A.value)