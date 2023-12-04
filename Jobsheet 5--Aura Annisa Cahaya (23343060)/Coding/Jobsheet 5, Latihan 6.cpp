#include <stdio.h>
#include <string.h>

int main() {
    char username[30], password[30];

    printf("=== Welcome to Awesome Program ===\n");
    printf("Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Remove the newline character

    printf("Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Remove the newline character

    if (strcmp(username, "petanikode") == 0) {
        if (strcmp(password, "kopi") == 0) {
            printf("Selamat datang bos!\n");
        } else {
            printf("Password salah, coba lagi!\n");
        }
    } else {
        printf("Anda belum terdaftar\n");
    }

    return 0;
}

