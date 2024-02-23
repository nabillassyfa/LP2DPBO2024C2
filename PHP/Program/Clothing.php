 

<!-- Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin -->

<?php
require ('Product.php');
class Clothing extends Product {
    // Variabel untuk menyimpan data
    private $size = '';
    private $material = '';
    private $gender = '';

    // Konstruktor
    
    public function __construct ($size ='', $material = '', $gender ='', $id='', $harga='', $name='', $brand=''){
        parent::__construct($id, $harga, $name, $brand);
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }
    

    // GET SET CLOTHING
    // metode untuk set size
    public function setSize ($size){
        $this->size = $size;
    }
    

     // metode untuk get size
    public function getSize(){
        return $this->size;
    }
    

     // metode untuk set material
    public function setMaterial ($material){
        $this->material = $material;
    }
    

     // metode untuk get Material
    public function getMaterial(){
        return $this->material;
    }
    

     // metode untuk set gender
    public function setGender ($gender){
        $this->gender = $gender;
    }
    

     // metode untuk get gender
    public function getGender(){
        return $this->gender;
    }

    function __destruct (){
        
    }
    
}

?>
