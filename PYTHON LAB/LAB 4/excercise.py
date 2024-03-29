class Person:
    def __init__(self, name, age):
        self.name = name
        self._age = age 

    def walk(self):
        print("{0} is walking (fastest).".format(self.name))

    def getAge(self):
        if self._age >= 10:
            return self._age  
        else:
            return -1


class Student(Person):
    def __init__(self, name, age,roll,grade):
        Person.__init__(self,name, age)
        self.roll = roll
        self.grade = grade
        
    def walk(self):
        print("{0} is walking fast.".format(self.name))
    
    
    
p2 = Person("Sheefa", 80)

print(p2.name)
print(p2._age)  
p2.walk()
print(p2.getAge())


p3 = Student("Shruti",90, 86,9)
print(p3.name)
print(p3._age)  
p3.walk()
print(p3.getAge())

p3.walk()
