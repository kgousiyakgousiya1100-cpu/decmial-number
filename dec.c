#include <stdio.h>

// Function to convert Decimal to Binary
void decimalToBinary(int num)
{
    int binary[32];
    int i = 0;

    while(num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert Decimal to Octal
void decimalToOctal(int num)
{
    int octal[32];
    int i = 0;

    while(num > 0)
    {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    printf("Octal: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert Decimal to Hexadecimal
void decimalToHex(int num)
{
    char hex[32];
    int i = 0;
    int remainder;

    while(num > 0)
    {
        remainder = num % 16;

        if(remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';

        num = num / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main()
{
    int number;

    printf("Enter a Decimal number: ");
    scanf("%d", &number);

    decimalToBinary(number);
    decimalToOctal(number);
    decimalToHex(number);

    return 0;
}