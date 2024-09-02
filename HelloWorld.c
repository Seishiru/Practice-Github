#include <stdio.h>
#define max_string 20


int main() {
    char game_name[max_string];
    printf("Player 1 name: (enter your name)\n");
    scanf("%s", game_name);
    printf("Welcome to the game world %s!\n", game_name);
    
}