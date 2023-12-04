// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program untuk menentukan nilai akhir mahasiswa

#include <stdio.h>

int main() {
    float nilaiKehadiran, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
  
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilaiKehadiran);

    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilaiTugas);

    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    nilaiAkhir = 0.2 * nilaiKehadiran + 0.2 * nilaiTugas + 0.25 * nilaiUTS + 0.35 * nilaiUAS;

    char kategori;
    if (nilaiAkhir >= 0 && nilaiAkhir <= 44) {
        kategori = 'E';
    } else if (nilaiAkhir <= 55) {
        kategori = 'D';
    } else if (nilaiAkhir <= 65) {
        kategori = 'C';
    } else if (nilaiAkhir <= 75) {
        kategori = 'B';
    } else if (nilaiAkhir <= 80) {
        kategori = 'B';
    } else if (nilaiAkhir <= 85) {
        kategori = 'A';
    } else if (nilaiAkhir <= 90) {
        kategori = 'A';
    } else {
        kategori = 'A';
    }

    printf("\n===== Hasil Kelulusan =====\n");
    printf("Nilai Akhir: %.2f\n", nilaiAkhir);
    
    if (nilaiAkhir >= 0 && nilaiAkhir <= 55) {
        printf("Maaf, Anda tidak lulus!\n");
    } else if (nilaiAkhir <= 65) {
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilaiAkhir <= 85) {
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else {
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan.\n");
    }

    return 0;
}

