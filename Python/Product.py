class Product:

    # Product attributes.
    __price = 0
    __idProduct = ""

    # Constructor.
    # Please take note that after a few try, Python seems to not accept
    # multiple constructor. So I decided to set it as empty constructor. #

    # Empty constructor.
    def __init__(self):
        pass
    
    # Setter and Getter. #

    # Set price attribute.
    def setPrice(self, price):
        self.__price = price
    
    # Set product's ID attribute.
    def setIDProduct(self, idProduct):
        self.__idProduct = idProduct
    
    # Get price attribute.
    def getPrice(self):
        return self.__price
    
    # Get product's ID attribute.
    def getIDProduct(self):
        return self.__idProduct