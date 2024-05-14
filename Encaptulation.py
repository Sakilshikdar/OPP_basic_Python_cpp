
class First:
    def __init__(self):
            self._a='From Preted attribute'
            self.__b="From Private attribute"


F=First()
print(F._a)
# print(F.__b)  Get attribute error
    

