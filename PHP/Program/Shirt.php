
<!-- Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin -->

<?php
require ('Clothing.php');
class Shirt extends Clothing{
    private $color ='';
    private $sleeve_type ='';


    //konstruktor ada isinya
    public function __construct($color ='',$sleeve_type = '', $size ='', $material = '', $gender ='', $id='', $harga='', $name='', $brand=''){
        parent::__construct($size, $material, $gender, $id, $harga, $name, $brand);
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }
    

    //Metode Get set

    //metode set warna
    public function setColor ($color){
        $this->color = $color;
    }
    

    //metode get warna
    public function getColor (){
        return $this->color;
    }
    

    //metode set Tipe Lengan baju
    public function setType ($sleeve_type){
        $this->sleeve_type = $sleeve_type;
    }
    

    //metode get Tipe Lengan baju
    public function getType (){
        return $this->sleeve_type;
    }

    function __destruct (){
        
    }

}
?>
