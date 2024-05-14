class Person:

    name ='afi'

    def __init__(self,age):
        self.age = age 


class Student(Person):
    def __init__(self,age):
        super().__init__(age)


st=Student(20)
print(st.name)
print(st.age)