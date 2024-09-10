#include "cipher.h"
#include "caesar_ui.h"

// The Caesarian Cipher is a substitution cipher where each letter in the plaintext is shifted a certain number of places down the alphabet.
// For example, with a shift of 1, 'A' would be replaced by 'B', 'B' would become 'C', and so on.

// In this implementation, we use a simple Caesar cipher to encrypt and decrypt text based on a shift value provided by the user.
// The fuctions for encryption and decryption are defined in cipher.c, while the user interface is implemented in caesar_ui.c.

int main() {
    init();
    showMenu();
    return 0;
}