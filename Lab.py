class Animal:
    def __init__(self):
        print("create animal")
    def sound(self):
        print("animal makes a sound")
    def __del__(self):
        print("delete animal")
        
class Dog(Animal):
    def __init__(self):
        super().__init__()
        print("dog")
    def sound(self):
        print("dog barks")
    def __del__(self):
        print("delete dog")

class Cat(Animal):
    def __init__(self):
        super().__init__()
        print("cat")
    def sound(self):
        print("cat meows")
    def __del__(self):
        print("delete cat")

a = Animal()
d = Dog()
c = Cat()

a.sound()
d.sound()
c.sound()

# no need to del by yourself