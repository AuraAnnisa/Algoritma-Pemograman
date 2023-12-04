// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program kalkulator sederhana yang terdiri dari beberapa pilihan operasi pada menu utama

#include <stdio.h>

int main() {
    float bilangan1, bilangan2, hasil;
    char pilihan;

    printf("===== Kalkulator =====\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");
    printf("Pilih operasi (a-e): ");
    scanf(" %c", &pilihan);

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bilangan1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bilangan2);

    switch (pilihan) {
        case 'a':
            hasil = bilangan1 + bilangan2;
            printf("Hasil Penjumlahan: %.2f\n", hasil);
            break;
        case 'b':
            hasil = bilangan1 - bilangan2;
            printf("Hasil Pengurangan: %.2f\n", hasil);
            break;
        case 'c':
            hasil = bilangan1 * bilangan2;
            printf("Hasil Perkalian: %.2f\n", hasil);
            break;
        case 'd':
            if (bilangan2 != 0) {
                hasil = bilangan1 / bilangan2;
                printf("Hasil Pembagian: %.2f\n", hasil);
            } else {
                printf("Pembagian oleh nol tidak diperbolehkan.\n");
            }
            break;
        case 'e':
            if (bilangan2 != 0) {
                hasil = (int)bilangan1 % (int)bilangan2;
                printf("Hasil Bagi: %.2f\n", hasil);
            } else {
                printf("Pembagian oleh nol tidak diperbolehkan.\n");
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}

