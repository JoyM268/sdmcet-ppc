/* Program to encrypt using vigenere cipher */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getNumericValue(char c) 
{
    if (isupper(c)) 
    {
        return c - 'A';
    }
    else if (islower(c)) 
    {
        return c - 'a';
    } 
    else 
    {
        return -1;
    }
}

char getCharacter(int n) 
{
    return (char) (n % 26 + 'A');
}

void encrypt(char* plaintext, char* key) 
{
    int plaintextLength = strlen(plaintext);
    int keyLength = strlen(key);
    
    for (int i = 0, j = 0; i < plaintextLength; i++, j++)
    {
        if (j == keyLength) 
        {
            j = 0;
        }
        
        int plaintextValue = getNumericValue(plaintext[i]);
        int keyValue = getNumericValue(key[j]);

        if (plaintextValue == -1 || keyValue == -1)
        {
            continue;
        }
        int encryptedValue = (plaintextValue + keyValue) % 26;
        char encryptedCharacter = getCharacter(encryptedValue);

        plaintext[i] = encryptedCharacter;
    }
}
void decrypt(char* ciphertext, char* key)
{
    int ciphertextLength = strlen(ciphertext);
    int keyLength = strlen(key);

    for (int i = 0, j = 0; i < ciphertextLength; i++, j++) 
    {
        if (j == keyLength) {
            j = 0;
        }

        int ciphertextValue = getNumericValue(ciphertext[i]);
        int keyValue = getNumericValue(key[j]);

        
        if (ciphertextValue == -1 || keyValue == -1) 
        {
            continue;
        }

        int decryptedValue = (ciphertextValue - keyValue + 26) % 26;
        char decryptedCharacter = getCharacter(decryptedValue);

        
        ciphertext[i] = decryptedCharacter;
    }
}

int main() 
{
    char plaintext[1000];
    char key[100];

    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("Enter key: ");
    fgets(key, sizeof(key), stdin);

    plaintext[strcspn(plaintext, "\n")] = '\0';
    key[strcspn(key, "\n")] = '\0';
    
    encrypt(plaintext, key);
    printf("Encrypted text: %s\n", plaintext);
}
