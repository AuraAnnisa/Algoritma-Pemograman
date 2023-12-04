// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program untuk menghitung luas persegi panjang dengan 
//			panjang = 10 cm, dan lebar = 5 cm

#include <stdio.h>

int main() {
    float panjang, lebar, luas;

    panjang = 10.0;  
    lebar = 5.0;     

    luas = panjang * lebar;

    printf("Panjang: %.2f cm\n", panjang);
    printf("Lebar: %.2f cm\n", lebar);
    printf("Luas Persegi Panjang: %.2f cm^2\n", luas);

    return 0;
}

