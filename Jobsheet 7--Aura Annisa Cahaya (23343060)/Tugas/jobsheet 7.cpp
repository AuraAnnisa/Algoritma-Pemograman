// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program untuk mencari rata-rata dari nilai dari 20 mahasiswa menggunakan array

#include <stdio.h>

int main() {
    float nilaiMahasiswa[20];
    int jumlahMahasiswa = 20;

    printf("Masukkan nilai dari 20 mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Nilai Mahasiswa %d: ", i + 1);
        scanf("%f", &nilaiMahasiswa[i]);
    }

    float totalNilai = 0.0;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        totalNilai += nilaiMahasiswa[i];
    }

    float rataRata = totalNilai / jumlahMahasiswa;

    printf("\n===== Hasil =====\n");
    printf("Nilai Mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Mahasiswa %d: %.2f\n", i + 1, nilaiMahasiswa[i]);
    }

    printf("\nRata-rata Nilai Mahasiswa: %.2f\n", rataRata);

    return 0;
}

