#include <stdio.h>

int main() {
    int pilihan;
    double saldo = 175000.0; 

    do {
        printf("\nATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih opsi 1-4: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                // Cek Saldo
                printf("Saldo Anda: Rp. %.2lf\n", saldo);
                break;
            case 2:
                // Setoran
                double setoran;
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%lf", &setoran);
                if (setoran > 0) {
                    saldo += setoran;
                    printf("Setoran berhasil. Saldo Anda sekarang: Rp. %.2lf\n", saldo);
                } else {
                    printf("Setoran tidak valid. Masukkan jumlah setoran yang lebih dari 0.\n");
                }
                break;
            case 3:
                // Penarikan Tunai
                double penarikan;
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%lf", &penarikan);
                if (penarikan > 0 && saldo - penarikan >= 50000) {
                    saldo -= penarikan;
                    printf("Penarikan tunai berhasil. Saldo Anda sekarang: Rp. %.2lf\n", saldo);
                } else if (penarikan <= 0) {
                    printf("Penarikan tidak valid. Masukkan jumlah penarikan yang lebih dari 0.\n");
                } else {
                    printf("Saldo Anda tidak mencukupi untuk melakukan penarikan ini.\n");
                }
                break;
            case 4:
            	printf("Terima kasih telah menggunakan ATM ini!\n");
                break;
            default:
                printf("Pilihan tidak valid. Pilih opsi 1-4.\n");
        }
    } while (pilihan != 4);

    return 0;
}
               

