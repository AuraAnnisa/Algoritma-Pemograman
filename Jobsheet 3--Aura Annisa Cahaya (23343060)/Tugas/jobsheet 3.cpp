// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Anda mempunyai jasa money changer, kemudian ada yang meminta 
//			penukaran uang rupiah ke dolar, berapa dollar yang harus anda berikan 
//			kepada si penukar untuk Rp. 2.500.000? 
//			Hitung menggunakan program yang anda buat!
 
 
#include <stdio.h>

int main() {
    float kursDollar, jumlahRupiah, jumlahDollar;
    kursDollar = 14250.0;  

    jumlahRupiah = 2500000.0;  

    jumlahDollar = jumlahRupiah / kursDollar;

    printf("Jumlah Rupiah: Rp. %.2f\n", jumlahRupiah);
    printf("Kurs Dollar: Rp. %.2f\n", kursDollar);
    printf("Jumlah Dollar: $ %.2f\n", jumlahDollar);

    return 0;
}

