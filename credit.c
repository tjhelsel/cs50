# include <cs50.h>
# include <stdio.h>

int main(void)
{
    long number = get_long("Enter a credit card number:\n");
    int length = 0;
    int sum = 0;
    bool odd = true;
    int first_digit;
    while (number > 0)
    {
        int digit = number % 10;
        if (odd)
        {
            sum += digit;
        }
        else
        {
            int digit_sum = digit * 2;
            if (digit_sum >= 10)
            {
                sum += (digit_sum / 10 + digit_sum % 10);
            }
            else
            {
                sum += digit_sum;
            }
        }
        odd = !odd;
        length += 1;
        if (number < 10)
        {
            first_digit = number;
            break;
        }
        number /= 10;
    }
    if (sum % 10 == 0)
    {
        if (first_digit == 3 && length == 15)
        {
            printf("AMEX\n");
        }
        else if (first_digit == 4 && (length == 16 || length == 13))
        {
            printf("VISA\n");
        }
        else if (first_digit == 5 && length == 16)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID/n");
    }
}