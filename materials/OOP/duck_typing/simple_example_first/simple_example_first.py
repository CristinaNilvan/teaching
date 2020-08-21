class Duck:

    def __init__(self):
        super(Duck, self).__init__()

    def fly(self):
        print("Duck is Flying")

class Sparrow:

    def __init__(self):
        super(Sparrow, self).__init__()

    def fly(self):
        print("Sparrow is Flying")

class Wolf:

    def __init__(self):
        super(Wolf, self).__init__()
        
    def howl (self):
        print ("Wolf is howl")


for animal in Duck(), Sparrow(), Wolf():
    animal.fly()
