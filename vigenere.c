//Some functions/keywords will not work w/o cs50 available!

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <type.h>

int shift(char c, int offset);

int main(int argc, string argv[])
{
  if (argc != 2)
  {
    printf("Usage: ./vignere keyword\n");
    return 1;
  }
  string key = argv[1];
  for (int i = 0, n = strlen(key); i < n; i++)
  {
    if (key[i] < 'a' || key[i] > 'z')
    {
      printf("Keyword must consist only of lower-case letters.");
      return 1;
    }
  }
  string message = get_string("plaintext:  ");
  printf("ciphertext: ");

  for (int i = 0, n = strlen(message), key_len = strlen(key); i < n; i++)
  {
    int offset = key[i % key_len] - 'a';
    char c = tolower(message[i]);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
      shift(message[i], offset);
    }
    else
    {
      printf("%c", c);
    }
  }
  printf("\n");

  return 0;
}

int shift(char c, int offset)
{
  int shifted = c + offset;
  if (c <= 'Z')
  {
    if (shifted > 'Z')
    {
      printf("%c", shifted - 26);
    }
    else
    {
      printf("%c", shifted);
    }
  }
  else
  {
    if (shifted > 'z')
    {
      printf("%c", shifted - 26);
    }
    else
    {
      printf("%c", shifted);
    }
  }
  return 0;
}
