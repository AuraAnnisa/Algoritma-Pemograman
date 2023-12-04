// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus :  program halaman login yang meminta pengguna untuk menginput username dan password, jika password 
//           yang digunakan benar maka muncul notifikasi “berhasil login”, sebaliknya keluar salah 
//			 muncul notifikasi di layar “password salah"

#include <stdio.h>
#include <string.h>

int main() {
    char usernameBenar[] = "user123";
    char passwordBenar[] = "pass123";
    char usernameInput[50];
    char passwordInput[50];

    printf("Masukkan username: ");
    scanf("%s", usernameInput);
    printf("Masukkan password: ");
    scanf("%s", passwordInput);
    
    if (strcmp(usernameInput, usernameBenar) == 0 && strcmp(passwordInput, passwordBenar) == 0) {
        printf("Berhasil login!\n");
    } else {
        printf("Password salah.\n");
    }

    return 0;
}

