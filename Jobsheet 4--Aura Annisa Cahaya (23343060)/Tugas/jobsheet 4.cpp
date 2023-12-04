#include <stdio.h>

int main() {
    int totalDetik, jam, menit, sisaDetik;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &totalDetik)

    ;jam = totalDetik / 3600;
    
    sisaDetik = totalDetik % 3600;

    menit = sisaDetik / 60;

    sisaDetik = sisaDetik % 60;

    // Tampilkan hasil konversi
    printf("Konversi waktu: %d jam, %d menit, %d detik\n", jam, menit, sisaDetik);

    return 0;
}

