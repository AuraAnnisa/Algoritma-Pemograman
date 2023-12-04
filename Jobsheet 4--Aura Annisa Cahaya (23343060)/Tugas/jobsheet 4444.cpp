#include <stdio.h>

int main() {
    const int tarifPertama = 15000;
    const float tarifBerikutnyaPersen = 0.5; 

    int durasiJam = 3;

    int totalBiaya;
    if (durasiJam == 1) {
        totalBiaya = tarifPertama;
    } else if (durasiJam > 1) {
        totalBiaya = tarifPertama + (durasiJam - 1) * tarifPertama * tarifBerikutnyaPersen;
    } else {
        printf("Durasi harus lebih dari 0 jam.\n");
        return 1; // Mengindikasikan error
    }

    printf("Total biaya: Rp %d\n", totalBiaya);

    return 0;
}

