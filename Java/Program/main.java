/*

Saya Nabilla Assyfa Ramadhani [2205297] 
mengerjakan Latihan
dalam mata Desain dan Pemograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin

*/

// Deklarasi Library
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

public class main{
    public static void main (String [] args){

        // Variabel untuk menampiung data
        int id;
        String name, brand, size, material, gender, color, sleeve_type, price;

        // Deklarasi array
        ArrayList <Shirt> list = new ArrayList <>();       

        // Deklarasi scanner
        Scanner sc = new Scanner (System.in);

        // Masukan user untuk data objek
        System.out.print("Masukan Jumlah data  :  "); 
        int n, i = 0;          // variabel untuk menampung jumlah objek, dan iterator
        n = sc.nextInt();      // masukan user untuk jumlah objek

        System.out.println ();  // menampilkan newline

        for (i = 0; i < n; i++){  // pengulangan sebanyak n banyaknya objek
            Shirt temp = new Shirt ();   // instansiasi shirt
            // Masukan user untuk Id produk
            System.out.print ("Masukan Id barang :  ");
            id = sc.nextInt();  
            // Masukan user untuk Nama
            System.out.print ("Masukan nama :  ");
            name = sc.next();
            // Masukan user untuk Nama Brand
            System.out.print("Masukan Brand produk :  ");
            brand = sc.next();
            // Masukan user untuk  Harga
            System.out.print("Masukan Harga produk :  ");
            price = sc.next();
            // Masukan user untuk Size
            System.out.print("Masukan Size :  ");
            size = sc.next();
            // Masukan user untuk Material
            System.out.print("Masukan material :  ");
            material = sc.next();
            // Masukan user untuk Gender
            System.out.print("Masukan gender :  ");
            gender = sc.next();
            // Masukan user untuk Warna
            System.out.print("Masukan Warna :  ");
            color = sc.next();
            // Masukan user untuk Tipe lengan baju
            System.out.print("Masukan Tipe lengan :  ");
            sleeve_type = sc.next();

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

            list.add (temp);
            System.out.println ();  // menampilkan new line
        }

        // Menampilkan produk
        System.out.println ();
        System.out.println ("Data Produk :");

        // variabel untuk menyimpan panjang setiap data
        int lenID = 0, lenNama= 0, lenBrand= 0, lenHarga= 0, lenSize= 0, lenMaterial= 0, lenGender= 0, lenWarna= 0, lenType = 0;

        // Prrogram mencari data terpanjang
        for (i = 0; i < list.size(); i++){
            lenID = Math.max(5, String.valueOf(list.get(i).getId()).length());
            lenNama = Math.max(15, String.valueOf(list.get(i).getName()).length());
            lenBrand = Math.max(15, String.valueOf(list.get(i).getBrand()).length());
            lenHarga = Math.max(10, String.valueOf(list.get(i).getHarga()).length());
            lenSize = Math.max(5, String.valueOf(list.get(i).getSize()).length());
            lenMaterial = Math.max(15, String.valueOf(list.get(i).getMaterial()).length());
            lenGender = Math.max(15, String.valueOf(list.get(i).getGender()).length());
            lenWarna = Math.max(10, String.valueOf(list.get(i).getColor()).length());
            lenType = Math.max(13, String.valueOf(list.get(i).getType()).length());
        }

        // PROGRAM UNTUK MENAMPILKAN TABEL
        // Menampilkan garis
        System.out.println("!-" + "-".repeat(lenID) + "-!-" + "-".repeat(lenNama) + "-!-" + "-".repeat(lenBrand) + "-!-" + "-".repeat(lenHarga) + "-!-" + "-".repeat(lenSize) + "-!-" + "-".repeat(lenMaterial) + "-!-" + "-".repeat(lenGender) + "-!-" + "-".repeat(lenWarna) + "-!-" + "-".repeat(lenType) + "-!");
        //header tabel
        System.out.printf("! %-"+lenID+"s ! %-"+lenNama+"s ! %-"+lenBrand+"s ! %-"+lenHarga+"s ! %-"+lenSize+"s ! %-"+lenMaterial+"s ! %-"+lenGender+"s ! %-"+lenWarna+"s ! %-"+lenType+"s !%n", "ID", "Nama", "Nama Brand", "Harga", "Size", "Material", "Jenis Kelamin", "Warna", "Type Lengan");
        // Menampilkan garis
        System.out.println("!-" + "-".repeat(lenID) + "-!-" + "-".repeat(lenNama) + "-!-" + "-".repeat(lenBrand) + "-!-" + "-".repeat(lenHarga) + "-!-" + "-".repeat(lenSize) + "-!-" + "-".repeat(lenMaterial) + "-!-" + "-".repeat(lenGender) + "-!-" + "-".repeat(lenWarna) + "-!-" + "-".repeat(lenType) + "-!");

        // Menampilkan isi data yang ada di dalam list
        for (i = 0; i < list.size(); i++){
             System.out.printf("! %-"+lenID+"s ! %-"+lenNama+"s ! %-"+lenBrand+"s ! %-"+lenHarga+"s ! %-"+lenSize+"s ! %-"+lenMaterial+"s ! %-"+lenGender+"s ! %-"+lenWarna+"s ! %-"+lenType+"s !%n", list.get(i).getId(), list.get(i).getName(), list.get(i).getBrand(), list.get(i).getHarga(), list.get(i).getSize(), list.get(i).getMaterial(), list.get(i).getGender(), list.get(i).getColor(), list.get(i).getType());
        }

        // Menampilkan garis
        System.out.println("!-" + "-".repeat(lenID) + "-!-" + "-".repeat(lenNama) + "-!-" + "-".repeat(lenBrand) + "-!-" + "-".repeat(lenHarga) + "-!-" + "-".repeat(lenSize) + "-!-" + "-".repeat(lenMaterial) + "-!-" + "-".repeat(lenGender) + "-!-" + "-".repeat(lenWarna) + "-!-" + "-".repeat(lenType) + "-!");
    }
}