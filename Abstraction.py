from abc import ABC,abstractmethod
 
class Animal(ABC):
 
    
    def sleep(self): #concrete method
        print("Going to sleep in a while")

     
    def eat(self):
        print("Start eating")
    
    @abstractmethod
    def sound(self):
        print("This function for defining the sound of any animal")
        pass
 
class Snake(Animal):
    def sound(self):
        print("I hiss")
 
class Dog(Animal):
    def sound(self):
        print("I bark")
 
class Lion(Animal):
    def sound(self):
        print("I roar")



#creating object of Dog class
d = Dog()
d.sound()
L=Lion()
L.sound()
S=Snake()
S.sound()
S.eat()

