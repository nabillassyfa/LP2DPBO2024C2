# 

# Saya Nabilla Assyfa Ramadhani [2205297] 
# mengerjakan Latihan
# dalam mata Desain dan Pemograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. 
# Aamiin


from Product import Product

class Clothing (Product) :
    # Variabel untuk menyimpan data
    __size = ""
    __material = ""
    __gender = ""

    # Konstruktor
    
    def __init__ (self, size ="", material = "", gender ="", id="", harga="", name="", brand=""):
        super().__init__(id, harga, name, brand)
        self.__size = size
        self.__material = material
        self.__gender = gender
    

    # GET SET CLOTHING
    # metode untuk set size
    def setSize (self, size):
        self.__size = size
    

     # metode untuk get size
    def getSize(self):
        return self.__size
    

     # metode untuk set material
    def setMaterial (self, material):
        self.__material = material
    

     # metode untuk get Material
    def getMaterial(self):
        return self.__material
    

     # metode untuk set gender
    def setGender (self, gender):
        self.__gender = gender
    

     # metode untuk get gender
    def getGender(self):
        return self.__gender
    
