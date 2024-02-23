

<!-- Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin -->


<?php

// memanggil objek Shirt
require ('Shirt.php');
// memanggil link style.css
echo '<link rel="stylesheet" href="CSS/style.css">';

// Deklarasi list
$list = [];  

// PROGRAM MEMASUKAN DATA
// membuat data baru
$produk1 = new Shirt ('Biru', 'Pendek', 'L', 'Katun', 'Perempuan', 'A123','17000000', 'T-Shirt','Prada');
$produk2 = new Shirt ('Pink', 'Panjang', 'M', 'Katun','Perempuan','BCDE','12000000','Blouse','Gucci');
$produk3 = new Shirt ('Hitam', 'Pendek', 'XL','Sutra', 'Laki-laki', 'E23B','76000000','Kemeja','LV');
$produk4 = new Shirt ('Putih', 'Panjang','XL','Sutra','Laki-laki','B123', '10000000','Jaket','Christian Dior');

// memasukan data kedalam list
array_push($list, $produk1);
array_push($list, $produk2);
array_push($list, $produk3);
array_push($list, $produk4);

// Menampilkan produk
echo "<h2 style='text-align: center;'>Data Produk</h2>";
echo '<table id="produk">';
    // header tabel
    echo "<tr>";
    echo "<th>ID</th>";
    echo "<th>Nama</th>";
    echo "<th>Nama Brand</th>";
    echo "<th>Harga</th>";
    echo "<th>Size</th>";
    echo "<th>Material</th>";
    echo "<th>Jenis Kelamin</th>";
    echo "<th>Warna</th>";
    echo "<th>Type Lengan Baju</th>";
    echo " </tr>";

    // menampilkan data didalam list
    foreach ($list as $produk) {
        echo "<tr>";
        echo "<td>" . $produk->getId() . "</td>";
        echo "<td>" . $produk->getName() . "</td>";
        echo "<td>" . $produk->getBrand() . "</td>";
        echo "<td>" . $produk->getHarga() . "</td>";
        echo "<td>" . $produk->getSize() . "</td>";
        echo "<td>" . $produk->getMaterial() . "</td>";
        echo "<td>" . $produk->getGender() . "</td>";
        echo "<td>" . $produk->getColor() . "</td>";
        echo "<td>" . $produk->gettype() . "</td>";
        echo "</tr>";
    }
    
echo "</table>";

?>