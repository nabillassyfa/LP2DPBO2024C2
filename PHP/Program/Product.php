

<!-- Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin -->


<?php
class Product{
    private $id = '';
    private $name = '';
    private $brand = '';
    private $harga = '';

   //Constructor
    public function __construct($id='', $harga='', $name='', $brand=''){
        $this->id = $id;
        $this->name = $name;
        $this->brand = $brand;
        $this->harga = $harga;
    }

   //GET SET Produk

   //metode untuk set Id
    public function setId ($id){
        $this->id = $id;
    }
    

   //metode untuk get Id
    public function getId (){
        return $this->id;
    }

    

   //metode untuk set Nama
    public function setName ($name){
        $this->name = $name;
    }
    

    //metode untuk get Nama
    public function getName (){
        return $this->name;
    }
    

   //metode untuk set Brand
    public function setBrand ($brand){
        $this->brand = $brand;
    }
    

    //metode untuk get Brand
    public function getBrand (){
        return $this->brand;
    }
    

   //metode untuk set Harga
    public function setHarga ($harga){
        $this->harga = $harga;
    }
    

   //metode untuk get Harga
    public function getHarga (){
        return $this->harga;
    }

    function __destruct (){
        
    }
}

?>
    
