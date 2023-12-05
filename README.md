# Pratikum Algoritma-Pemograman
Bagian ini berfungsi untuk menjelaskan part dari jobsheets Algoritma Pemograman yang telah diberikan oleh dosen pengampu. Penjelasan terdapat pada link tertera dibawah.

Dosen : Randi Proska Sandra, M.Sc<br>
Sesi kelas : INF1.62.1008<br>
Mahasiswa : Aura Annisa Cahaya (23343069)

# Jobsheets #
1. [Jobsheet 1 - Pengantar Algoritma dan Pemrograman](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%201--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Algoritma adalah urutan langkah-langkah yang disusun secara sistematis dan logis. Pemrograman adalah penggunaaan satu atau lebih algoritme yang saling berhubungan dengan menggunakan suatu bahasa pemrograman tertentu sehingga menjadi suatu program komputer. Bahasa pemrograman merupakan kumpulan aturan sintaks dan semantik yang dipakai untuk mendefinisikan program komputer. Pada pembahasan kali ini akan mendalami mengenai bahasa C.

C adalah sebuah bahasa pemrograman general-purpose dan imperative yang mendukung pemrograman terstruktur dan rekursif. Seperti teknologi yang terus berkembang, begitu juga dengan bahasa C. Terdapat berbagai versi dari bahasa ini yaitu ANSI C dan ISO C, C99, C11, dan C18.

IDE dalah software atau perangkat lunak yang digunakan oleh programmer untuk membuat sebuah program komputer atau sebagai tempat pengembangan aplikasi.  IDE memiliki banyak fitur yang mendukung proses pemrograman. Contohnya adalah DevC++, Microsoft Visual Studio, CodeBlocks, NetBeans, Eclips, dll. 

2. [Jobsheet 2 - Pemrograman Dasar C](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%202--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Pada program syntax paling dasar dari C, terdapat header (#include) yang berfungsi untuk mengimpor fungsi-fungsi yang sudah didefinisikan pada header. Header berfungsi menyimpan file dan liibrary ke program yang akan dibuat.  Header berekstensi .h, contoh: stdio.h, yang bisa  kita gunakan pada fungsi yang terdapat didalam library stdio.h.

  Selain header, juga terdapat struktur main() yang merupakan sebuah fungsi. Ada dua tipe data yang bisa dimasukkan kedalam main, yaitu int dan void. Int digunakan ketika ada nilai yang bisa dikembalikan dan harus memakai return 0 pada bagian akhir program untuk mengembalikan nilai 0, sementara void digunakan ketika kita tidak mengembalikan nilai apapun dan tidak perlu menggunakan return 0.

  Ada berbagai fungsi yang bisa digunakan untuk menampilkan output seperti printf() dan puts(). Fungsi untuk mengambil input pada bahasa C adalah fungsi biasa seperti scanf() atau fungsi seperti gets() dan fgets() yang biasanya digunakan ketika ada situasi tertentu.
  
3. [Jobsheet 3 - Variabel, Konstanta dan Tipe Data](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%203--Aura%20Annisa%20Cahaya%20(23343060))<br>

 Variabel adalah sebuah tempat menyimpan sebuah nilai dan tipe data 
adalah jenis nilai yang akan tersimpan dalam variabel. Penulisan variabel tidak boleh didahului simbol atau angka dan variabel bersifat case sensitive.

  Tipe data adalah pengelompokan data yang membantu compiler untuk mengolah data tergantung dengan tipe data yang dituliskan pada program tersebut seperti char yang hanya berisi satu karakter atau integer (int) yang berupa angka.

    Ada tipe data void, yang menyatakan bahwa tidak ada data, yang tidak akan mengembalikan nilai apapun. Terdapat sebuah variabel yang tidak dapat diubah nilainya yaitu konstanta yang dapat ditulis secara global setelah header menggunakan define atau setelah main menggunakan const.
    
4. [Jobsheet 4 - Operator](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%204--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Ada tiga jenis operator yaitu Operator Aritmatika yang biasanya digunakan untuk operasi matematika, Operator yang digunakan untuk operasi tertentu, Operator Penugasan yang merupakan operator yang memberikan tugas pada variabel.

  Ada yang disebut dengan Operator Logika yang berlogika antara AND, OR, atau Negasi dan berputar disekitar logika True dan False. Operator yang beroperasi sama namun lebih kompleks daripada Operator Logika adalah Operator Bitwise.

  Operator bitwise merupkan operator yang digunakan untuk operasi berdasarkan biner dari sebuah nilai. Operator bitwise terdiri atas AND, OR, XOR, NOT yang konsepnya kurang lebih sama dengan Operator Logika sementara Left Shift dan Right Shift berfungsi menghasilkan nilai biner dari sisi tertentu.
  
5. [Jobsheet 5 - Flow Control (Decision Making)](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%205--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Decision Making merupakan pernyataan yang memungkinkan pemrogram 
untuk mengubah jalur eksekusi normal melalui program. Decision Making dapat berupa If-ELSE (If, If-else, If-else-if, Nested If) dan Switch.

  If adalah percabangan yang hanya memiliki satu nilai benar sementara If-else adalah percabangan yang memiliki dua nilai benar dan salah untuk else. If-else-if adalah percabangan yang memiliki dua piliihan lebih namun hanya dapat mengisi dengan satu karakter. 

  Switch Case adalah bentuk percabangan dari If-else-if yang memiliki format yang berbeda dari induknya. Berbeda dengan If-else-if yang hanya bisa memuat satu karakter, switch case dapat memuat blok code yang diinginkan, namun harus diakhiri dengan break untuk menghentikan loop yang dapat memberatkan memori.
  
6. [Jobsheet 6 - Flow Control (Looping)](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%206--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Loop adalah konstruksi aliran kontrol yang memungkinkan kode untuk dieksekusi secara berulang kali hingga beberapa kondisi terpenuhi. Loop memungkinkan melakukan banyak hal secara berulang tapi dengan program yang ringkas. Perulangan yang dapat membantu dalam program bahasa C adalah counted loop dan uncounted loop.

  Pengulangan For adalah counted loop. For dihitung mulai dari 0 hingga 10 dan setiap perulangan akan ditambah 1. i pada for menyimpan nilai hitungan bilangan yang akan selalu bertambah satu karena rumusnya adalah (int i = 0; i < 10; i ++).

  Uncounted loop pada C adalah while dan do while. While merupakan perulangan yang memberikan counter selama variabel ulang bernilai y. Sementara do while akan melakukan 1 kali perulangan terlebih dahulu lalu menuju perulangan pada while, berbeda pada program yang hanya memiliki while saja. Nested loop adalah perulangan dalam perulangan yang menggunakan variabel i sebagai counter dann j sebagai counter secara berurutan.
  
7. [Jobsheet 7 - Array](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%207--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Array berfungsi menyimpan banyak data didalam program dalam satu tempat yang mana setiap data tersebut akan memiliki indeks. Indeks array akan dimulai dari nol dan ukurannya bergantung pada banyak data yang ditampung. Dalam program ukuran array ditentukan dengan kurung siku [].

  User dapat melakukan perulangan pada array dengan menggunakan perulangan dasar seperti for yang akan mencetak keseluruhan nilai dengan satu baris kode yang berada dalam blok perulangan for. User juga dapat mengambil panjang array menggunakan sizeof() yang akan mengambil ukuran memori dari array.

    Array multidimensi merupakan array yang memiliki dua dimensi atau lebih. Pengambilan nilai dari array ini dapat menggunakan string yang dapat berformat seperti strcpy() yang berfungsi untuk mengkopi string, strcat() yang digunakan untuk menambahkan string dari belakang, strlen() yang berfungsi menghitung panjang string, dan strcmp() yang membandingkan dua string.
    
8. [Jobsheet 8 - Fungsi dan Prosedur](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%208--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Fungsi adalah sub-program yang bisa digunakan kembali baik di dalam 
program itu sendiri, maupun di program yang lain. Fungsi biasanya mengembalikan nilai dari hasil prosesnya dan user harus menentukan tipe data yang akan dikembalikan oleh fungsi. Jika fungsi tidak memiliki nilai kembalian maka user dapat menggunakan fungsi void.

Ada fungsi denngan parameter yang akan menyimoan nilai yang akan diinputkan, apabila terdapat lebih dari satu parameter, dapat dipisahkan dengan koma. Jika terdapat fungsi yang tidak memiliki nilai kembalian, maka ada fungsi yang mengembalikan nilai yang berfungsi agar dapat diproses pada tahap berikutnya. Return disini berfungsi untuk mengembalikan nilai fungsi. Fungsi rekrusif adalah fungsi yang dapat memanggil dirinya sendiri.

  Selain fungsi, jobsheet ini juga mempelajari variabel yang terdiri atas variabel global dan lokal. Variabel global adalah variabel yang dapat diakses oleh semua fungsi sementara variabel lokal adalah variabel yang hanya dapat diakses oleh fungsi yang menaunginya. Terdapat juga Pass by value dan pass by reference yang merupakan cara untuk memberikan nilai pada 
paramaeter.

9. [Jobsheet 9 - Pointer](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%209--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Pointer adalah sebuah variabel yang berisi alamat memori dari variabel yang lain. Pointer disimbolkan dengan simbol asterik (*) yang kemudiakn akan diisi dengan alamat memori. Alamat memori yang digunakan sebagai referensi pada pointer akan sama dengan alamat memori dari variabel yang dipakai sebagai referensi. 

 Apabila ingin melihat alamat memori dari pointer, maka user harus menginputkan simbol &. Perbedaan alamat memori dengan alamat referensi adalah Alamat memori pointer adalah alamat memori yang digunakan untuk 
menyimpan pointer, sedangkan alamat referensi adalah alamat yang akan 
menjadi referensi dari pointer.

  Sebenarnya, penggunaan pointer tidaklah wajib, kelebihan dari program yang menggunakan pointer adalah peforma program dengan pointer akan lebih optimal dibanding program yang tidak menggunakannya. 

10. [Jobsheet 10 - Enumerasi dan Structure](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%2010--Aura%20Annisa%20Cahaya%20(23343060))<br>

  Enum  merupakan tipe data yang berisi sekumpulan konstanta, yang termasuk dalam tipe data bentukan. Apabila user tidak menginputkan nilai konstanta pada enum, maka program akan mengisi enum mengikuti urutan penulisannya. Enum memberikan fleksibilitas dalam penggunaan memori karena variabel enum hanya mengambil satu nilai dari konstanta. 

  Structure adalah kumpulan dari beberapa variabel dengan beragam tipe data dalam satu varabel. Penggunaan struct dapat dipakai dengan format 'struct yang kemudian akan diikuti dengan nama struct dan isi.

  User dapat menggunakan typedef pada struct yang akan mendefinisikan tipe data baru. Struct dapat dibuat bersarang yang artinya ada struct di dalam 
struct lainnya.
11. [Jobsheet 11 - File Handling in C](https://github.com/AuraAnnisa/Algoritma-Pemograman/tree/main/Jobsheet%2011--Aura%20Annisa%20Cahaya%20(23343060))<br>

  File dalam komputer terbagi atas file teks dan binary. Fungsi yang berfungsi membuka file dalam C adalah fopen() dengan contoh     
                      fopen("filepath", "r");  
  
  Fungsi ini menghasilkan pointer yang menunuk ke alamat memori dari file yang akan dibuka. Apabila terdapat banyak baris dalam file tersebut, user disarankan menggunakan input perulangan untuk menciptakan baris program yang lebih rapi.

  Untuk menulis file, C akan menggunakan fputs(). Ada berbagai fungsi file handling dalam bahasa program selain yang disebutkan, seperti fread() dan fwrite().

