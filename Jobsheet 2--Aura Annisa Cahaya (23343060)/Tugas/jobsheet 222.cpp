// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program untuk menghitung luas dari segitiga berikut, jika 
//			diketahui panjang alas = 8 cm, dan tinggi = 5 cm

#include <stdio.h>

int main() {
    float panjangAlas, tinggi, luas;

    
    panjangAlas = 8.0;  
    tinggi = 5.0;      

    luas = 0.5 * panjangAlas * tinggi;

    printf("Panjang Alas: %.2f cm\n", panjangAlas);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Luas Segitiga: %.2f cm^2\n", luas);

    return 0;
}

