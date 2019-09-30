//Sadly some functions/keywords will not work w/o cs50 available!

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (key[i] < '1' || key[i] > '9')
            {
                printf("Key must be a positive integer!\n");
                return 1;
            }
        }
    }
    int k = atoi(key);
    string plain_text = get_string("Plain text: ");
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plain_text); i < n; i++) {
        char c = plain_text[i];
        if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
        {
            printf("%c", c);
        }
        else
        {
            if (c <= 'Z')
            {
                if (c + k > 'Z')
                {
                    printf("%c", c + k - 26);
                }
                else
                {
                    printf("%c", c + k);
                }
            }
            else
            {
                if (c + k > 'z')
                {
                    printf("%c", c + k - 26);
                }
                else
                {
                    printf("%c", c + k);
                }
            }
        }
    }
    printf("\n");
}
