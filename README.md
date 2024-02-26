Saya Nabilla Assyfa Ramadhani [2205297] mengerjakan Latihan dalam mata Desain dan Pemograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

<br><br>
# Desain Kelas
### Multi-Level Inheritance
 ![alt text](https://github.com/nabillassyfa/LP2DPBO2024C2/blob/main/Diagram%20Pewarisan%20.jpg)<br>
Product dan Clothing memiliki hubungan inheritance karena dalam dunia nyata clothing merupakan salah satu jenis produk, sehingga clothing dapat mewarisi atribut - atribut yang ada pada kelas Product. <br><br>

Clothing dan Shirt memiliki hubungan inheritance karena Shirt adalah jenis khusus dari Clothing. Dalam konteks ini, Shirt dapat mewarisi semua atribut dan metode yang ada di kelas Clothing. Karena Clothing merupakan sub-Class Product, maka Shirt dapat mewarisi atribut dan metode yang ada dikelas Product.<br>
 
# Desain Program
Program ini menggunakan 4 bahasa yakni C++, JAVA, PYTHON, dan PHP. Dalam desain program ini, saya menggunakan Multi-level Inheritance untuk membuat kelas - kelas yang merepresentasikan Product, Clothing dan Shirt.
<br> Adapun rincian kelas - kelas tersebut antara lain:<br>
### Kelas Product
1. Kelas ini memiliki atribut <br>
   a. ID    : Atribut ini digunakan untuk menyimpan ID produk.<br>
   b. Nama  : Atribut ini digunakan untuk menyimpan nama produk.<br>
   c. Brand : Atribut ini digunakan untuk menyimpan nama merk/brand dari produk. <br>
   e. Price  : Atribut ini digunakan untuk menyimpan harga produk. <br>
2. Kelas ini memiliki metode sebagai berikut :<br>
   a. Konstruktor  : Metode konstruktor digunakan untuk menginisialisasi objek ketika dibuat. Pada kelas Product, konstruktor akan menerima parameter yang diperlukan seperti ID, nama, brand, dan harga.<br>
   b. Getter       : Metode getter digunakan untuk mendapatkan nilai dari atribut tertentu. <br>
   c. Setter       : Metode setter digunakan untuk mengatur nilai atribut tertentu. <br>
3. Kelas ini merupakan Parent dari kelas Clothing, dan Kakek dari kelas Shirt
<br>

### Kelas Clothing
1. Kelas ini memiliki atribut <br>
   a. Size   : Atribut ini digunakan untuk menyimpan Size produk.<br>
   b. Material  : Atribut ini digunakan untuk menyimpan material produk.<br>
   c. Gender : Atribut ini digunakan untuk menyimpan jenis kelamin pengguna produk. <br>
2. Kelas ini memiliki metode sebagai berikut :<br>
   a. Konstruktor  : Metode konstruktor digunakan untuk menginisialisasi objek ketika dibuat.<br>
   b. Getter       : Metode getter digunakan untuk mendapatkan nilai dari atribut tertentu. <br>
   c. Setter       : Metode setter digunakan untuk mengatur nilai atribut tertentu. <br>
3. Kelas ini merupakan Sub Class dari kelas Product, dan Parent dari kelas Shirt.
<br>

### Kelas Shirt
1. Kelas ini memiliki atribut <br>
   a. Color   : Atribut ini digunakan untuk menyimpan warna produk.<br>
   b. Sleeve_type  : Atribut ini digunakan untuk menyimpan jenis lengan baju produk.<br>
2. Kelas ini memiliki metode sebagai berikut :<br>
   a. Konstruktor  : Metode konstruktor digunakan untuk menginisialisasi objek ketika dibuat.<br>
   b. Getter       : Metode getter digunakan untuk mendapatkan nilai dari atribut tertentu. <br>
   c. Setter       : Metode setter digunakan untuk mengatur nilai atribut tertentu. <br>
3. Kelas ini merupakan Sub Class dari kelas Clothing, dan Cucu dari kelas Product.
<br>

Pada Program ini, penggunaan kelas cucu yakni Shirt menjadi fokus utama dalam main. setelah objek - objek Shirt dibuat dalam main, data tersebut akan ditampilkan dalam bentuk tabel.


# Penjelasan alur
1. User diminta untuk memasukan jumlah data yang ingin dibuat <br> 
2. Setelah memasukkan jumlah data, User diminta untuk memasukan detail data produk, seperti ID produk, nama produk, Brand Produk, dsb nya. <br> 
3. Setelah user memasukkan semua detail produk, User akan diperlihatkan data yang telah dimasukkan sebelumnya. <br> 


# Dokumentasi Program
![alt text](https://github.com/nabillassyfa/LP2DPBO2024C2/blob/main/Python/Screenshot/Input.png)
![alt text](https://github.com/nabillassyfa/LP2DPBO2024C2/blob/main/Python/Screenshot/Output.png)
