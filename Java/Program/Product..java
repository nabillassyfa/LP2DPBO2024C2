/*

Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin

*/

class Product {
    private int id;
    private String name;
    private String brand;
    private String harga;

    // Konstruktor kosong
    Product (){
    }

    // Konstruktor 
    Product (int id, String harga, String name, String brand){
        this.id = id;
        this.name = name;
        this.brand = brand;
        this.harga = harga;
    }

    // GET SET Produk

    // metode untuk set Id
    void setId (int id){
        this.id = id;
    }

     // metode untuk get Id
    int getId (){
        return this.id;
    }

    // metode untuk set Nama
    void setName (String name){
        this.name = name;
    }

     // metode untuk get Nama
    String getName (){
        return this.name;
    }

    // metode untuk set Brand
    void setBrand (String brand){
        this.brand = brand;
    }

     // metode untuk get Brand
    String getBrand (){
        return this.brand;
    }

    // metode untuk set Harga
    void setHarga (String harga){
        this.harga = harga;
    }

    // metode untuk get Harga
    String getHarga (){
        return this.harga;
    }
}