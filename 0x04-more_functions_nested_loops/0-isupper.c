#iinclude "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c) {
    // Check if the character is within the ASCII range of uppercase letters ('A' to 'Z')
    if (c >= 'A' && c <= 'Z') {
        return 1; // Return 1 if it's an uppercase letter
    } else {
        return 0; // Return 0 if it's not an uppercase letter
    }
}
