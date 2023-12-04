#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move to the next pair of characters
        start++;
        end--;
    }
}

int main() {
    char kalimat[100];

    // Input kalimat dari pengguna
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Hapus karakter newline dari input
    kalimat[strcspn(kalimat, "\n")] = '\0';

    // Panggil fungsi untuk membalikkan kalimat
    reverseString(kalimat);

    // Tampilkan kalimat yang sudah dibalik
    printf("Kebalikannya: %s\n", kalimat);

    return 0;
}

