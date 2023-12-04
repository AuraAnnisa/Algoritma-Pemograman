// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program sederhana untuk menginputkan beberapa biodata mahasiswa

#include <stdio.h>

int main() {
    int jumlahMahasiswa;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    FILE *file = fopen("datamahasiswa.txt", "w");

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        char nama[100], nim[50], jurusan[50], prodi[50];

        printf("\nMasukkan data mahasiswa ke-%d\n", i);
        printf("Nama: ");
        scanf("%s", nama);
        printf("NIM: ");
        scanf("%s", nim);
        printf("Jurusan: ");
        scanf("%s", jurusan);
        printf("Program Studi: ");
        scanf("%s", prodi);

        fprintf(file, "Data Mahasiswa ke-%d\n", i);
        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Jurusan: %s\n", jurusan);
        fprintf(file, "Program Studi: %s\n\n", prodi);
    }

    fclose(file);

    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt.\n");

    return 0;
}

