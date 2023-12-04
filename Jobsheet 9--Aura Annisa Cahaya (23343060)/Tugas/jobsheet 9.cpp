#include <stdio.h>

int main() {
    char string[] = "BORLAND";
    char *ptr = string;

    for (int i = 6; i >= 0; i--) {
        for (int j = i; j <= 6; j++) {
            printf("%c", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}




