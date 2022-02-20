from Product import Product

class Hardware(Product):

    # Hardware attributes.
    __brand = ""
    __model = ""

    # Constructor.
    # Please take note that after a few try, Python seems to not accept
    # multiple constructor. So I decided to set it as empty constructor. #

    # Empty constructor.
    def __init__(self):
        pass
    
    # Setter and Getter. #

    # Set brand attribute.
    def setBrand(self, brand):
        self.__brand = brand
    
    # Set model attribute.
    def setModel(self, model):
        self.__model = model
    
    # Get brand attribute.
    def getBrand(self):
        return self.__brand
    
    # Get model attribute.
    def getModel(self):
        return self.__model
    
