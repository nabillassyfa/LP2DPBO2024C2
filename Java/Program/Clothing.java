/*

Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin

*/

class Clothing extends Product {
    // Variabel untuk menyimpan data
    private String size;
    private String material;
    private String gender;

    // Konstruktor
    Clothing (){
    }

    Clothing (String size, String material, String gender){
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // GET SET CLOTHING
    // metode untuk set size
    void setSize (String size){
        this.size = size;
    }

     // metode untuk get size
    String getSize(){
        return this.size;
    }

     // metode untuk set material
    void setMaterial (String material){
        this.material = material;
    }

     // metode untuk get Material
    String getMaterial(){
        return this.material;
    }

     // metode untuk set gender
    void setGender (String gender){
        this.gender = gender;
    }

     // metode untuk get gender
    String getGender(){
        return this.gender;
    }
}