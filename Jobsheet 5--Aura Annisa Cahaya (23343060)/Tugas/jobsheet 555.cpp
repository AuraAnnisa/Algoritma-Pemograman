// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program rumus lengkap dengan menggunakan logika pengambilan keputusan dengan switch case

#include <stdio.h>
#include <math.h>

int main() {
    char pilihan;
    float hasil;

    printf("Pilih rumus luas permukaan:\n");
    printf("a) Bola\n");
    printf("b) Kubus\n");
    printf("c) Balok\n");
    printf("d) Tabung\n");
    printf("Masukkan pilihan (a-d): ");
    scanf(" %c", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan jari-jari bola: ");
            float jariJari;
            scanf("%f", &jariJari);
            hasil = 4 * M_PI * pow(jariJari, 2);
            printf("Luas permukaan bola: %.2f\n", hasil);
            break;

        case 2:
            printf("Masukkan sisi kubus: ");
            float sisiKubus;
            scanf("%f", &sisiKubus);
            hasil = 6 * pow(sisiKubus, 2);
            printf("Luas permukaan kubus: %.2f\n", hasil);
            break;

        case 3:
            printf("Masukkan panjang balok: ");
            float panjangBalok, lebarBalok, tinggiBalok;
            scanf("%f", &panjangBalok);
            printf("Masukkan lebar balok: ");
            scanf("%f", &lebarBalok);
            printf("Masukkan tinggi balok: ");
            scanf("%f", &tinggiBalok);
            hasil = 2 * (panjangBalok * lebarBalok + panjangBalok * tinggiBalok + lebarBalok * tinggiBalok);
            printf("Luas permukaan balok: %.2f\n", hasil);
            break;

        case 4:
            printf("Masukkan jari-jari tabung: ");
            float jariJariTabung, tinggiTabung;
            scanf("%f", &jariJariTabung);
            printf("Masukkan tinggi tabung: ");
            scanf("%f", &tinggiTabung);
            hasil = 2 * M_PI * pow(jariJariTabung, 2) + 2 * M_PI * jariJariTabung * tinggiTabung;
            printf("Luas permukaan tabung: %.2f\n", hasil);
            break;

        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}

