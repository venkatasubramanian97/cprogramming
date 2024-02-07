/*factorial for given number*/
#include<stdio.h>
int factorial(int);
void main()
{
    int number,fact;
    printf("Input the number : ");
    scanf("%d",&number);
    fact=factorial(number);
    printf("factorial given number is : %d",fact);
}
int factorial(int number)
{
    int i,multi=1;
    for(i=number;i>=1;i--)
    {
        multi=multi*i;
    }
    return multi;
}
/*output:
Input the number : 5
factorial given number is : 120
*/