#include <stdio.h>
#include "cipher.h"
#include "caesar_ui.h"

void showMenu() {
    // Declare variables to store user input
    char option;
    char text[100];
    int shiftValue;

    printf("Caesar Cipher\n");
    printf("Choose (e)ncrypt or (d)ecrypt: ");
    scanf(" %c", &option);

    // Check if the option is valid
    if (option != 'e' && option != 'd') {
        printf("Invalid option. Exiting.\n");
        return;
    }

    printf("Enter text: ");
    scanf(" %[^\n]", text); // %[^\n] to read until newline is encountered

    printf("Enter shift value: ");
    scanf("%d", &shiftValue);

    // Perform encryption or decryption based on user input
    if (option == 'e') {
        encrypt(text, shiftValue);
        printf("Encrypted text: %s\n", text);
    } else if (option == 'd') {
        decrypt(text, shiftValue);
        printf("Decrypted text: %s\n", text);
    }
}
