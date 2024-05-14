
class Students:
   
    def __init__(self,name,age):
        self.name= name
        self.age= age

    def __str__(self):
        return f"name:{self.name} and age: ({self.age})"

st =Students('Rafi',10)
print(st)
