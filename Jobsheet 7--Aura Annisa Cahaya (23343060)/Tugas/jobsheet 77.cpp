// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program array untuk menampung input nama mahasiswa dari keyboard

#include <stdio.h>

int main() {
    int jumlahMahasiswa;

    printf("Input banyak mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    char namaMahasiswa[jumlahMahasiswa][100];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    printf("\n===== Nama Mahasiswa =====\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}

