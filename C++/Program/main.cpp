/*

Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin

*/

// Deklarasi Library
#include <bits/stdc++.h>  // include semua library di cpp
#include "Shirt.cpp"


using namespace std;

int main (){

    // Variabel untuk menampiung data
    int id;
    string name, brand, size, material, gender, color, sleeve_type, price;

    // Deklarasi list
    list <Shirt> list;     

    // Masukan user untuk data objek
    cout <<("Masukan Jumlah data  :  "); 
    int n, i = 0;          // variabel untuk menampung jumlah objek, dan iterator
    cin >> n;      // masukan user untuk jumlah objek
    // menampilkan newline
    cout << "\n";

    

    for (i = 0; i < n; i++){  // pengulangan sebanyak n banyaknya objek
        Shirt temp;   // instansiasi shirt
        // Masukan user untuk Id produk
        cout << ("=========================")<< endl;
        cout << ("!  MASUKAN DATA KE- ")<<(i+1) << "   !"<<endl;
        cout << ("=========================")<< endl;

        cout << ("Masukan Id barang    :  ");
        cin >> id;
        // Masukan user untuk Nama
        cout << ("Masukan nama         :  ");
        cin >> name;
        // Masukan user untuk Nama Brand
        cout <<("Masukan Brand produk :  ");
        cin >> brand;
        // Masukan user untuk  Harga
        cout <<("Masukan Harga produk :  ");
        cin >> price;
        // Masukan user untuk Size
        cout <<("Masukan Size         :  ");
        cin >> size;
        // Masukan user untuk Material
        cout <<("Masukan material     :  ");
        cin >> material;
        // Masukan user untuk Gender
        cout <<("Masukan gender       :  ");
        cin >> gender;
        // Masukan user untuk Warna
        cout <<("Masukan Warna        :  ");
        cin >> color;
        // Masukan user untuk Tipe lengan baju
        cout <<("Masukan Tipe lengan  :  ");
        cin >> sleeve_type;

        // menampilkan newline
        cout << "\n";
        // menyimpan data kedalam list
        temp.setId (id);
        temp.setName (name);
        temp.setBrand (brand);
        temp.setHarga (price);
        temp.setSize (size);
        temp.setMaterial (material);
        temp.setGender (gender);
        temp.setColor (color);
        temp.setType (sleeve_type);

        list.push_back (temp);

        // menampilkan newline
        cout << "\n";

    }

    
    // Menampilkan produk
    cout <<("Data Produk :") << endl;

    // variabel untuk menyimpan panjang setiap data
    int lenID = 5, lenNama= 15, lenBrand= 15, lenHarga= 10, lenSize= 5, lenMaterial= 10, lenGender= 15, lenWarna= 10, lenType = 11;

    // Prrogram mencari data terpanjang
    for (auto it = list.begin (); it != list.end(); it++){
        // Mencari id terpanjang
        int idLength = to_string(it->getId()).length();
        if (idLength > lenID) {      // kondisi jika panjang id yang dimasukan lebih besar dari lenID 
            lenID = idLength;       // mengganti lenId dengan id terpanjang
        }

        // Mencari nama terpanjang
        int nameLength = it->getName().length();
        if (nameLength > lenNama) {     // kondisi jika panjang nama yang dimasukan lebih besar dari lenNama 
            lenNama = nameLength;       // mengganti lenNama dengan nama terpanjang
        }

        // Mencari Brand terpanjang
        int brandLength = it->getBrand().length();
        if (brandLength > lenBrand) {       // kondisi jika panjang brand yang dimasukan lebih besar dari lenBrand 
            lenBrand = brandLength;         // mengganti lenBrand dengan brand terpanjang
        }

        // Menccari Harga terpanjang
        int hargaLength = it->getHarga().length();
        if (hargaLength > lenHarga) {        // kondisi jika panjang harga yang dimasukan lebih besar dari lenHarga 
            lenHarga = hargaLength;          // mengganti lenHarga dengan harga terpanjang
        }

        // mencari Size terpanjang
        int sizeLength = it->getSize().length();
        if (sizeLength > lenSize) {          // kondisi jika panjang size yang dimasukan lebih besar dari lenSize
            lenSize = sizeLength;            // mengganti lensize dengan size terpanjang
        }

        // Mencari Material terpanjang
        int materialLength = it->getMaterial().length();
        if (materialLength > lenMaterial) {     // kondisi jika panjang material yang dimasukan lebih besar dari lenMaterial
            lenMaterial = materialLength;       // mengganti lenmaterial dengan material terpanjang
        }

        // Menacri Gender terpanjang
        int genderLength = it->getGender().length();
        if (genderLength > lenGender) {        // kondisi jika panjang gender yang dimasukan lebih besar dari lenGender
            lenGender = genderLength;          // mengganti lengender dengan gender terpanjang
        }

        // Mencari Color terpanjang
        int colorLength = it->getColor().length();
        if (colorLength > lenWarna) {          // kondisi jika panjang warna yang dimasukan lebih besar dari lenWarna
            lenWarna = colorLength;            
        }

        // Mencari Type terpanjang
        int typeLength = it->getType().length();
        if (typeLength > lenType) {           // kondisi jika panjang type lengan yang dimasukan lebih besar dari lenType 
            lenType = typeLength;
        }
    }


    // Menampilkan garis
    cout << "!-" << string(lenID, '-') << "-!-" << string(lenNama, '-') << "-!-" << string(lenBrand, '-') << "-!-" << string(lenHarga, '-') << "-!-" << string(lenSize, '-') << "-!-" << string(lenMaterial, '-') << "-!-" << string(lenGender, '-') << "-!-" << string(lenWarna, '-') << "-!-" << string(lenType, '-') << "-!" << endl;

    // Menampilkan header tabel
    cout << "! " << left << setw(lenID) << "ID" << " ! " << left << setw(lenNama) << "Nama" << " ! " << left << setw(lenBrand) << "Nama Brand" << " ! " << left << setw(lenHarga) << "Harga" << " ! " << left << setw(lenSize) << "Size" << " ! " << left << setw(lenMaterial) << "Material" << " ! " << left << setw(lenGender) << "Jenis Kelamin" << " ! " << left << setw(lenWarna) << "Warna" << " ! " << left << setw(lenType) << "Type Lengan" << " !" << endl;

    // Menampilkan garis
    cout << "!-" << string(lenID, '-') << "-!-" << string(lenNama, '-') << "-!-" << string(lenBrand, '-') << "-!-" << string(lenHarga, '-') << "-!-" << string(lenSize, '-') << "-!-" << string(lenMaterial, '-') << "-!-" << string(lenGender, '-') << "-!-" << string(lenWarna, '-') << "-!-" << string(lenType, '-') << "-!" << endl;

    // Menampilkan isi data yang ada di dalam list
    for (auto it = list.begin (); it != list.end(); it++){
        cout << "! " << setw(lenID) << it->getId() << " ! " << setw(lenNama) << it->getName() << " ! " << setw(lenBrand) << it->getBrand() << " ! " << setw(lenHarga) << it->getHarga() << " ! " << setw(lenSize) << it->getSize() << " ! " << setw(lenMaterial) << it->getMaterial() << " ! " << setw(lenGender) << it->getGender() << " ! " << setw(lenWarna) << it->getColor() << " ! " << setw(lenType) << it->getType() << " !" << endl;

    }

    // Menampilkan garis
    cout << "!-" << string(lenID, '-') << "-!-" << string(lenNama, '-') << "-!-" << string(lenBrand, '-') << "-!-" << string(lenHarga, '-') << "-!-" << string(lenSize, '-') << "-!-" << string(lenMaterial, '-') << "-!-" << string(lenGender, '-') << "-!-" << string(lenWarna, '-') << "-!-" << string(lenType, '-') << "-!" << endl;
    

    return 0;
}