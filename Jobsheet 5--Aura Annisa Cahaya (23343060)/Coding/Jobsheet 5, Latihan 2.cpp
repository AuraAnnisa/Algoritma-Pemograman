#include <stdio.h>
#include <string.h>

int main() {
    // membuat array karakter untuk menyimpan password
    char password[30];

    printf("==== Program Login ====\n");
    printf("Masukkan password: ");
    
    // menggunakan %[^\n] untuk mengambil input string yang mungkin mengandung spasi
    scanf(" %[^\n]", password);

    // percabangan if/esle
    if (strcmp(password, "kopi") == 0) {
        printf("Selamat datang bos!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }

    printf("Terimakasih sudah menggunakan aplikasi ini!\n");

    return 0;
}

