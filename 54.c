#include <stdio.h>
#include <math.h>

int main()
{
    int num, firstDigit, digits, placeValue;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        printf("%d\n", num);

        digits = (int) log10(num);                // Get total number of digits
        placeValue = (int) ceil(pow(10, digits)); // Get the place value of first digit
        firstDigit = (int)(num / placeValue);     // Get the first digit

        num = num - (placeValue * firstDigit);    // Remove first digit from number
    }

    return 0;
}
