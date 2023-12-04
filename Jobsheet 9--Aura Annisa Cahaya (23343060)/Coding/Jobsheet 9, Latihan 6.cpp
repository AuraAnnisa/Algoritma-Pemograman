#include <stdio.h>
#include <stdlib.h>

struct Weapon {
    char *name;
    int attack;
    int guard;
};

struct Player {
    char *name;
    int score;
    int hp;
    struct Weapon *weapon;
};

int main() {
    // Define a Weapon
    struct Weapon katana;
    katana.name = "Katana";
    katana.attack = 16;
    katana.guard = 10;

    // Initialize a Player with the Weapon
    struct Player player1;
    player1.name = "Petani Kode";
    player1.score = 0;
    player1.hp = 100;
    player1.weapon = &katana; // Point to the Weapon

    // Print player status
    printf("PLAYER STATUS\n");
    printf("Name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);
    printf("HP: %d\n", player1.hp);
    printf("Weapon\n");
    printf("  Name: %s\n", player1.weapon->name);
    printf("  Attack: %d\n", player1.weapon->attack);
    printf("  Guard: %d\n", player1.weapon->guard);

    return 0;
}

