#include <stdio.h>

int main()
{
    int value;
    printf("Enter a number: ");
    scanf("%d",&value);
    printf("Decimal value is: %d\n",value);
    printf("\nOctal value is: %o\n",value);
    printf("\nHexadecimal value is (Alphabet in small letters): %x\n",value);

    return 0;
}
