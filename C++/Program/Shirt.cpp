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
#include "Clothing.cpp"


using namespace std;

class Shirt : public Clothing {
    private:
    string color;
    string sleeve_type;

    public :
    // Konstruktor kosong
    Shirt(){
    }

    // konstruktor ada isinya
    Shirt (string color, string sleeve_type){
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    //Metode Get set

    // metode set warna
    void setColor (string color){
        this->color = color;
    }

    // metode get warna
    string getColor (){
        return this->color;
    }

    // metode set Tipe Lengan baju
    void setType (string sleeve_type){
        this->sleeve_type = sleeve_type;
    }

    // metode get Tipe Lengan baju
    string getType (){
        return this->sleeve_type;
    }

};