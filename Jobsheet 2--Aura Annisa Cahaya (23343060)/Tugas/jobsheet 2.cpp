// Nama : Aura Annisa Cahaya
//	NIM : 23343060
//	Prodi : Informatika (NK)
//	Kasus : Program dengan algoritma menampilkan tulisan “Hello, siapa nama lengkapmu?
//			Pengguna menginputkan nama lengkap <nama>
//			Menampilkan pesan “Selamat Datang <nama> dalam 
// 			Pemrograman C!” 

#include <stdio.h>

int main() {
    char nama;

    printf("Hello, siapa namamu?\n ");
    
    printf("Nama saya: ");
    scanf("%[^\n]s", &nama);

    printf("Selamat Datang %s dalam Pemrograman C!", nama);

    return 0;
}


