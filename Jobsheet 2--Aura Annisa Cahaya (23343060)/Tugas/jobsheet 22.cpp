// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus :	Program yang meminta inputan nama, NIM, program 
//			studi, fakultas, Nilai Praktikum, UTS, UAS. Hitung Nilai Akhir!
//			Nilai Akhir = 30% Nilai Praktikum + 30% UTS + 40% UAS#include <stdio.h>

int main() {
    // Deklarasi variabel
    char nama, nim, prodi, fakultas;
    float nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir;

    printf("Nama: ");
    scanf("%s", nama);

    printf("NIM: ");
    scanf("%s", nim);

    printf("Prodi: ");
    scanf("%s", prodi);

    printf("Fakultas: ");
    scanf("%s", fakultas);

    printf("Nilai Praktikum: ");
    scanf("%f", &nilaiPraktikum);

    printf("Nilai UTS: ");
    scanf("%f", &nilaiUTS);

    printf("Nilai UAS: ");
    scanf("%f", &nilaiUAS);

    nilaiAkhir = 0.30 * nilaiPraktikum + 0.30 * nilaiUTS + 0.40 * nilaiUAS;

    printf("\nKeluaran output yang diharapkan:\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Prodi: %s\n", prodi);
    printf("Fakultas: %s\n", fakultas);
    printf("Nilai Praktikum: %.2f\n", nilaiPraktikum);
    printf("Nilai UTS: %.2f\n", nilaiUTS);
    printf("Nilai UAS: %.2f\n", nilaiUAS);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir);

    return 0;
}

