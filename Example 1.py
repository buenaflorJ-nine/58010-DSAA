class Rectangle:
    def __init__(self, width, length):
        self.width = width
        self.length = length
    
    def area_rectangle(self):
        return self.width*self.length
        
    def display_rectangle(self):
        print("The area of the rectangle is", self.area_rectangle())

rectangle = Rectangle(7,5)
rectangle.display_rectangle()