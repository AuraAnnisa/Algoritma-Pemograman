#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inisialisasi seed untuk fungsi rand()

    char playAgain;
    do {
        int computerNumber = rand() % 20 + 1; // Menghasilkan nomor acak antara 1 dan 20
        int userGuess;
        int attempts = 0;

        printf("Selamat datang di Game Tebak Angka!\n");
        printf("Saya telah memilih suatu nomor antara 1 dan 20. Coba tebak!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &userGuess);

            attempts++;

            if (userGuess < computerNumber) {
                printf("Nomor saya lebih besar!\n");
            } else if (userGuess > computerNumber) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar!\n");
                printf("Anda berhasil menebak dalam %d percobaan.\n", attempts);
            }

        } while (userGuess != computerNumber);

        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}

