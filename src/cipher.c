#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cipher.h"

// Static variables to store the uppercase and lowercase alphabets
// Using static variables ensures that they are only initialized once
static char alphabet_upper[27];
static char alphabet_lower[27];

void init() {
    // Define the uppercase and lowercase alphabets
    strcpy(alphabet_upper, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    strcpy(alphabet_lower, "abcdefghijklmnopqrstuvwxyz");
}

// Function to convert a letter to a number by finding its index in the alphabet
int letterToNumber(char letter) {
    if (isupper(letter)) {
        for (int i = 0; i < 26; i++) {
            if (alphabet_upper[i] == letter) {
                return i;
            }
        }
    } else if (islower(letter)) {
        for (int i = 0; i < 26; i++) {
            if (alphabet_lower[i] == letter) {
                return i;
            }
        }
    }
    return -1; // Return -1 for non-alphabetic characters
}

// Function to convert a number to a letter by finding the corresponding character in the alphabet
char numberToLetter(int number, char originalLetter) {
    if (number < 0 || number >= 26) {
        return originalLetter; // Return the original character if it's not in the alphabet
    }

    // Check if the original letter was uppercase or lowercase
    if (isupper(originalLetter)) {
        return alphabet_upper[number];
    } else if (islower(originalLetter)) {
        return alphabet_lower[number];
    }
    return originalLetter;
}

// Function to shift a number by a given value, wrapping around the alphabet
int shift(int number, int shiftValue) {
    int shiftedNumber = (number + shiftValue) % 26;
    if (shiftedNumber < 0) {
        shiftedNumber += 26; // Ensure wrap-around correctly for negative shifts
    }
    return shiftedNumber;
}

// Function to encrypt a text by shifting each alphabetic character by the shift value
void encrypt(char* text, int shiftValue) {
    for (int i = 0; i < strlen(text); i++) {
        int num = letterToNumber(text[i]);
        if (num != -1) { // Only shift alphabetic characters
            text[i] = numberToLetter(shift(num, shiftValue), text[i]);
        }
    }
}

// Function to decrypt a text by shifting each alphabetic character by the negative shift value
void decrypt(char* text, int shiftValue) {
    for (int i = 0; i < strlen(text); i++) {
        int num = letterToNumber(text[i]);
        if (num != -1) { // Only shift alphabetic characters
            text[i] = numberToLetter(shift(num, -shiftValue), text[i]);
        }
    }
}
