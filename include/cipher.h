#ifndef CIPHER_H
#define CIPHER_H

void init();
int letterToNumber(char letter);
char numberToLetter(int number, char originalLetter);
int shift(int number, int shiftValue);
void encrypt(char* text, int shiftValue);
void decrypt(char* text, int shiftValue);

#endif