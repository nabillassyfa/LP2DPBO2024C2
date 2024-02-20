/*

Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin

*/

class Shirt extends Clothing {
    private String color;
    private String sleeve_type;

    // Konstruktor kosong
    Shirt(){
    }

    // konstruktor ada isinya
    Shirt (String color, String sleeve_type){
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    //Metode Get set

    // metode set warna
    void setColor (String color){
        this.color = color;
    }

    // metode get warna
    String getColor (){
        return this.color;
    }

    // metode set Tipe Lengan baju
    void setType (String sleeve_type){
        this.sleeve_type = sleeve_type;
    }

    // metode get Tipe Lengan baju
    String getType (){
        return this.sleeve_type;
    }

}