/*Write a C program to find the HCF (Highest C'\\ommon Factor) of two numbers*/
#include <stdio.h>
int main()
{
    int number1, number2, i, hcf, condition;
    printf("Enter 1st number of HCF : ");
    scanf("%d", &number1);
    printf("Enter 2nd number of HCF : ");
    scanf("%d", &number2);
    if (number1 < number2)
        condition = number1;
    else
        condition = number2;

    for (i = 1; i <= condition; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is :%d", number1, number2, hcf);
    return 0;
}
/*output:
Enter 1st number of HCF : 24
Enter 2nd number of HCF : 28
HCF of 24 and 28 is :4
*/