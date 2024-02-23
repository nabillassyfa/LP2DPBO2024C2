

# Saya Nabilla Assyfa Ramadhani [2205297] 
# mengerjakan Latihan
# dalam mata Desain dan Pemograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. 
# Aamiin



# Deklarasi Library
from Shirt import Shirt


# Deklarasi list
list = []     

# Masukan user untuk  jumlah data objek
print("Masukan Jumlah data  :  ", end="") 
# menampung jumlah objek, dan iterator
n = int (input())      # masukan user untuk jumlah objek

print ()  # menampilkan newline

for i in range (n) :  # pengulangan sebanyak n banyaknya objek
    # Masukan user untuk Id produk
    print ("+========================+")
    print ("|   MASUKAN DATA KE -{}   |".format(i+1))
    print ("+========================+")
    print ("Masukan Id barang    :  ", end="")
    id = str (input ())
    # Masukan user untuk Nama
    print ("Masukan nama         :  ", end="")
    name = str (input ())
    # Masukan user untuk Nama Brand
    print("Masukan Brand produk :  ", end="")
    brand = str (input ())
    # Masukan user untuk  Harga
    print("Masukan Harga produk :  ", end="")
    price = str (input ())
    # Masukan user untuk Size
    print("Masukan Size         :  ", end="")
    size = str (input ())
    # Masukan user untuk Material
    print("Masukan material     :  ", end="")
    material = str (input ())
    # Masukan user untuk Gender
    print("Masukan gender       :  ", end="")
    gender = str (input ())
    # Masukan user untuk Warna
    print("Masukan Warna        :  ", end="")
    color = str (input ())
    # Masukan user untuk Tipe lengan baju
    print("Masukan Tipe lengan  :  ", end="")
    sleeve_type = str (input ())

    # menyimpan data kedalam list

    list.append(Shirt(color, sleeve_type, size, material, gender, id, price, name, brand))
    print ()  # menampilkan new line


# Menampilkan produk
print ()
print ("Data Produk :")

# Mencari jumlah string terpanjang setiap kolom
for barang in list:
    lenID = max(6, len(str(barang.getId())))
    lenNama = max(30, len(str(barang.getName())))
    lenBrand = max(15, len(str(barang.getBrand())))
    lenHarga = max(10, len(str(barang.getHarga())))
    lenSize  = max(5, len(str(barang.getSize())))
    lenMaterial  = max(13, len(str(barang.getMaterial())))
    lenGender  = max(15, len(str(barang.getGender())))
    lenWarna  = max(10, len(str(barang.getColor())))
    lenType  = max(13, len(str(barang.getType())))

# mencetak garis tabel
print ("!-{}-!-{}-!-{}-!-{}-!-{}!-{}-!-{}-!-{}-!-{}-!".format('-' * lenID, '-' * lenNama, '-' * lenBrand, '-' * lenHarga, '-' * lenSize, '-' * lenMaterial, '-' * lenGender, '-' * lenWarna, '-' * lenType))

# header tabel
print ("! {:<{}} ! {:<{}} ! {:<{}} ! {:<{}} ! {:<{}}! {:<{}} ! {:<{}} ! {:<{}} ! {:<{}} !".format("ID" , lenID, "Nama" , lenNama, "Nama Brand" , lenBrand, "Harga" , lenHarga, "Size" , lenSize, "Material" , lenMaterial, "Jenis Kelamin" , lenGender, "Warna" , lenWarna, "Type Lengan" , lenType))


# mencetak garis tabel
print ("!-{}-!-{}-!-{}-!-{}-!-{}!-{}-!-{}-!-{}-!-{}-!".format('-' * lenID, '-' * lenNama, '-' * lenBrand, '-' * lenHarga, '-' * lenSize, '-' * lenMaterial, '-' * lenGender, '-' * lenWarna, '-' * lenType))

# menampilkan data 
for barang in list:
    print ("! {:<{}} ! {:<{}} ! {:<{}} ! {:<{}} ! {:<{}}! {:<{}} ! {:<{}} ! {:<{}} ! {:<{}} !".format(barang.getId() , lenID, barang.getName() , lenNama, barang.getBrand(),lenBrand, barang.getHarga() , lenHarga, barang.getSize() , lenSize, barang.getMaterial() , lenMaterial, barang.getGender(),lenGender, barang.getColor() , lenWarna, barang.getType() , lenType))
    

# mencetak garis tabel
print ("!-{}-!-{}-!-{}-!-{}-!-{}!-{}-!-{}-!-{}-!-{}-!".format('-' * lenID, '-' * lenNama, '-' * lenBrand, '-' * lenHarga, '-' * lenSize, '-' * lenMaterial, '-' * lenGender, '-' * lenWarna, '-' * lenType))
