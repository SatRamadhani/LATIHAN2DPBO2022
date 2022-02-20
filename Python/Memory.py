from Hardware import Hardware

class Memory(Hardware):

    # Memory attributes.
    __frequency = 0
    __memorySize = 0
    __supportsCuda = False

    # Constructor.
    # Please take note that after a few try, Python seems to not accept
    # multiple constructor. So I decided to set it as empty constructor. #

    # Empty constructor.
    def __init__(self):
        pass
    
    # Setter and Getter. #

    # Set frequency attribute.
    def setFrequency(self, frequency):
        self.__frequency = frequency
    
    # Set memory size attribute.
    def setMemorySize(self, memorySize):
        self.__memorySize = memorySize
    
    # Set CUDA support attribute.
    def setSupportsCuda(self, supportsCuda):
        self.__supportsCuda = supportsCuda
    
    # Get frequency attribute.
    def getFrequency(self):
        return self.__frequency
    
    # Get memory size attribute.
    def getMemorySize(self):
        return self.__memorySize
    
    # Get CUDA support attribute.
    def getSupportsCuda(self):
        return self.__supportsCuda