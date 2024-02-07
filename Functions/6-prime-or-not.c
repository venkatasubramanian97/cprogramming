/*prime number or not*/
#include<stdio.h>
void prime(int);
void main()
{
    int number;
    printf("Input the number : ");
    scanf("%d",&number);
    prime(number);
}
void prime(int number)
{
    int i,multi=1;
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            multi=multi*i;
        }
    }
    if(multi==number)
    {
        printf("The number is prime number : %d",number);
    }
    else
    {
        printf("The number is not prime number : %d",number);
    }
}
/*output:
Input the number : 3
The number is prime number : 3
PS D:\c-program\functions> .\output
Input the number : 4
The number is not prime number : 4
*/