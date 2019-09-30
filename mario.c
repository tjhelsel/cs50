//Sadly some functions/keywords will not work w/o cs50 available!

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    n = get_int("Enter a number between 1 and 8:\n");
  } while (n < 1 || n > 8);

  //     int len = n/2;
  string row = "#";
  for (int i = 0; i < n; i++)
  {
    for (int j = n - i; j > 1; j--)
    {
      printf(" ");
    }
    for (int j = 0; j <= i; j++)
    {
      printf("%s", row);
    }

    printf("\n");
  }
}
