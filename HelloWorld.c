#include <stdio.h>
#define max_string 20


int main() {
    char game_name[max_string];
    printf("Player 1 name: (enter your name)\n");
    scanf("%s", game_name);
    printf("Welcome to the game world %s!\n", game_name);

    char game_name2[max_string];
    printf("Player 2 name: (enter your name)\n");
    scanf("%s", game_name2);
    printf("Welcome to the game world %s!\n", game_name2);

    printf("Prepare yourselves, %s and %s! The battle is about to begin!\n", game_name, game_name2);

    return 0;
}