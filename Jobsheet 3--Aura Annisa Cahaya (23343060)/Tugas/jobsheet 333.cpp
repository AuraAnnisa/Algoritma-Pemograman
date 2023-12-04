// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Menghitung dan menampilkan volume dan luas permukaan dari bola

#include <stdio.h>

// Konstanta untuk nilai Phi
#define PI 3.14159

int main() {
    float diameter, jariJari, volume, luasPermukaan;
    diameter = 12.0;  
    jariJari = diameter / 2.0;

    volume = (4.0 / 3.0) * PI * jariJari * jariJari * jariJari;

    luasPermukaan = 4.0 * PI * jariJari * jariJari;

    // Menampilkan hasil
    printf("Diameter bola basket: %.2f cm\n", diameter);
    printf("Jari-jari bola: %.2f cm\n", jariJari);
    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luasPermukaan);

    return 0;
}

