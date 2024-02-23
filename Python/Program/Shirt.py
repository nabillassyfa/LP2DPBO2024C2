
# Saya Nabilla Assyfa Ramadhani [2205297] 
# mengerjakan Latihan
# dalam mata Desain dan Pemograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. 
# Aamiin

from Clothing import Clothing

class Shirt (Clothing):
    __color =""
    __sleeve_type =""


    #konstruktor ada isinya
    def __init__(self, color ="",sleeve_type = "", size ="", material = "", gender ="", id="", harga="", name="", brand=""):
        super().__init__(size, material, gender, id, harga, name, brand)
        self.__color = color
        self.__sleeve_type = sleeve_type
    

    #Metode Get set

    #metode set warna
    def setColor (self, color):
        self.__color = color
    

    #metode get warna
    def getColor (self):
        return self.__color
    

    #metode set Tipe Lengan baju
    def setType (self, sleeve_type):
        self.__sleeve_type = sleeve_type
    

    #metode get Tipe Lengan baju
    def getType (self):
        return self.__sleeve_type
    

