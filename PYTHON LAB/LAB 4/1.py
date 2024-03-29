#Write a class file - box with three data members(length, width, height) and a method volume(). 
#Then create an object of the box class and print the volume of that object.

class Box:
    def __init__(self, length, width, height):
        self.length = length  
        self.width = width
        self.height = height
        
    def volume(self):
        print(f"Volume is {self.length * self.width * self.height}")

b1 = Box(11, 22, 33)
b1.volume()

    