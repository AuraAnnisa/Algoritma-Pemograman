#include <stdio.h>

int main() {
    //membuat Variabel
    char nama[20], web_address[30];
    
    printf("Nama: ");
    scanf("%s", &nama); 
    
    printf("Alamat web: ");
    scanf("%s", &web_address); 
    
    printf("\n----------------------------\n");
    printf("Nama yang diinputkan: %s\n", nama); 
    printf("Alamat web yang diinputkan: %s\n", web_address);
    
    return 0;
}
