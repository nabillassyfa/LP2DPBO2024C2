

# Saya Nabilla Assyfa Ramadhani [2205297] 
# mengerjakan Latihan
# dalam mata Desain dan Pemograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. 
# Aamiin



class Product:
    __id = ""
    __name = ""
    __brand = ""
    __harga = ""

    # Constructor
    def __init__(self, id="", harga="", name="", brand=""):
        self.__id = id
        self.__name = name
        self.__brand = brand
        self.__harga = harga

    # GET SET Produk

    # metode untuk set Id
    def setId (self, id):
        self.__id = id
    

     # metode untuk get Id
    def getId (self):
        return self.__id
    

    # metode untuk set Nama
    def setName (self, name):
        self.__name = name
    

     # metode untuk get Nama
    def getName (self):
        return self.__name
    

    # metode untuk set Brand
    def setBrand (self, brand):
        self.__brand = brand
    

     # metode untuk get Brand
    def getBrand (self):
        return self.__brand
    

    # metode untuk set Harga
    def setHarga (self, harga):
        self.__harga = harga
    

    # metode untuk get Harga
    def getHarga (self):
        return self.__harga
    
