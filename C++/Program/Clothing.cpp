/*

Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan-> 
Aamiin

*/


#include <iostream>
#include <string>
#include "Product.cpp"


using namespace std;


class Clothing : public Product {
    // Variabel untuk menyimpan data
    private :
   string size;
   string material;
   string gender;


   public :
    // Konstruktor
    Clothing (){
    }

    Clothing (string size, string material, string gender){
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    // GET SET CLOTHING
    // metode untuk set size
    void setSize (string size){
        this->size = size;
    }

     // metode untuk get size
    string getSize(){
        return this->size;
    }

     // metode untuk set material
    void setMaterial (string material){
        this->material = material;
    }

     // metode untuk get Material
    string getMaterial(){
        return this->material;
    }

     // metode untuk set gender
    void setGender (string gender){
        this->gender = gender;
    }

     // metode untuk get gender
    string getGender(){
        return this->gender;
    }
};