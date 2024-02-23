/*

Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin

*/

#include <iostream>
#include <string>


using namespace std;


class Product {
    private :
    int id;
    string name;
    string brand;
    string harga;


    public :
    // Konstruktor kosong
    Product (){
    }

    // Konstruktor 
    Product (int id, string harga, string name, string brand){
        this->id = id;
        this->name = name;
        this->brand = brand;
        this->harga = harga;
    }

    // GET SET Produk

    // metode untuk set Id
    void setId (int id){
        this->id = id;
    }

     // metode untuk get Id
    int getId (){
        return this->id;
    }

    // metode untuk set Nama
    void setName (string name){
        this->name = name;
    }

     // metode untuk get Nama
    string getName (){
        return this->name;
    }

    // metode untuk set Brand
    void setBrand (string brand){
        this->brand = brand;
    }

     // metode untuk get Brand
    string getBrand (){
        return this->brand;
    }

    // metode untuk set Harga
    void setHarga (string harga){
        this->harga = harga;
    }

    // metode untuk get Harga
    string getHarga (){
        return this->harga;
    }
};