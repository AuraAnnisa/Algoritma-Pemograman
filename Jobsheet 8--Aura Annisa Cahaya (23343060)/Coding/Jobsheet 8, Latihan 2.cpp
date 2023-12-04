#include <stdio.h>

void say_hello(char name[]){
    printf("Hello %s!\n", name);
}

int main(){
    say_hello("Dian");
    say_hello("Petani");
    say_hello("Kode");
}
