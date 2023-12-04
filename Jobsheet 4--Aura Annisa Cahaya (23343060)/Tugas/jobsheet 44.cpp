#include <stdio.h>

int main() {
    int hargaBarang, jumlahBarang, hargaTotal; 

    printf("Halo! Selamat berbelanja!\n");
    printf("Masukkan nama anda: ");
    char nama[100];
    scanf("%s", nama);

    printf("Barang yang dibeli: ");
    char barang[100];
    scanf("%s", barang);

    printf("Harga barang per-satuan: ");
    scanf("%d", &hargaBarang);

    printf("Jumlah barang yang anda beli: ");
    scanf("%d", &jumlahBarang);

    hargaTotal = hargaBarang * jumlahBarang;

    printf("\n======================\n");
    printf("Barang yang dibeli: %s\n", barang); 
    printf("Harga barang per-satuan: %d\n", hargaBarang);
    printf("Jumlah barang yang anda beli: %d\n", jumlahBarang);
    printf("Total harga: %d\n", hargaTotal);

    return 0;
}

