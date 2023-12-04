// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program konversi suhu dengan inputan data dari keyboard.
	
#include <stdio.h>

int main() {
    float celcius, kelvin, fahrenheit, reamur;
    
    printf("Input Suhu (Celcius): ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;

    printf("Suhu dalam Kelvin: %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f\n", reamur);

    return 0;
}

