#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void char_to_binary(char c);

int main(void)
{
    char message[100];
    printf("Message: ");
    fgets(message, sizeof(message), stdin);
    int length = strlen(message);

    for (int i = 0; i < length; i++)
    {
        char_to_binary(message[i]);
    }

    return 0;
}

void char_to_binary(char c)
{
    for (int i = BITS_IN_BYTE - 1; i >= 0; i--)
    {
        int bit = (c >> i) & 1;
        if (bit == 0)
        {
            printf("⚫\uFE0F");
//            printf("0");
        }
        else if (bit == 1)
        {
            printf("🟡");
//            printf("1");
        }
    }
    printf("\n");
}