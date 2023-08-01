#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char password[], int shift) {
    char* encryptedPassword = (char*)malloc((strlen(password) + 1) * sizeof(char));
    int passwordIndex = 0;

    while (password[passwordIndex] != '\0') {
        if (password[passwordIndex] == ' ') {
            encryptedPassword[passwordIndex] = ' ';
        } else {
            encryptedPassword[passwordIndex] = (password[passwordIndex] - 32 + shift) % 95 + 32;
        }
        passwordIndex++;
    }
    encryptedPassword[passwordIndex] = '\0';

    printf("\nEncrypted Password: %s\n", encryptedPassword);

    free(encryptedPassword);
}

void decrypt(char encryptedPassword[], int shift) {
    char* decryptedPassword = (char*)malloc((strlen(encryptedPassword) + 1) * sizeof(char));
    int passwordIndex = 0;

    while (encryptedPassword[passwordIndex] != '\0') {
        if (encryptedPassword[passwordIndex] == ' ') {
            decryptedPassword[passwordIndex] = ' ';
        } else {
            decryptedPassword[passwordIndex] = (encryptedPassword[passwordIndex] - 32 - shift + 95) % 95 + 32;
        }
        passwordIndex++;
    }
    decryptedPassword[passwordIndex] = '\0';

    printf("\nDecrypted Password: %s\n", decryptedPassword);

    free(decryptedPassword);
}

int main() {
    char password[100];
    int shift = 2;
    int choice;
    int i = 0;

    do {
        printf("Choose an option:\n");
        printf("1. Encrypt\n");
        printf("2. Decrypt\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar();

        printf("Write your password: ");
        fgets(password, sizeof(password), stdin);

        size_t len = strlen(password);
        if (len > 0 && password[len - 1] == '\n') {
            password[len - 1] = '\0';
        }

        if (choice == 1) {
            encrypt(password, shift);
        } else if (choice == 2) {
            decrypt(password, shift);
        } else {
            printf("Invalid choice. Please choose 1 or 2.\n");
        }
        i++;
    } while (i < 2);

    return 0;
}
