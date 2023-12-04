// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program dengan nama TOSERBA dalam melayani pembeli mempunyai ketentuan dalam memberikan diskon

#include <stdio.h>

int main() {
    float totalPembelian, diskon, cashback, totalPembayaran;
    
    printf("Masukkan total pembelian (Rp): ");
    scanf("%f", &totalPembelian);

    if (totalPembelian <= 75000) {
        diskon = 0.05 * totalPembelian;
        cashback = 0;
    } else if (totalPembelian <= 125000) {
        diskon = 0.15 * totalPembelian;
        cashback = 0;
    } else {
        diskon = 0.25 * totalPembelian;
        cashback = 5000;
    }

    totalPembayaran = totalPembelian - diskon + cashback;

    printf("\n===== Struk Pembayaran =====\n");
    printf("Total Pembelian: Rp. %.2f\n", totalPembelian);
    printf("Diskon: Rp. %.2f\n", diskon);
    printf("Cashback: Rp. %.2f\n", cashback);
    printf("Total Pembayaran: Rp. %.2f\n", totalPembayaran);
    printf("=============================\n");

    return 0;
}

