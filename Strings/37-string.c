/*Write a C program to multiply two positive numbers as strings. Return a string representation of the product*/
#include<stdio.h>
void main()
{
    int str1,str2,product;
    printf("Input the two number : ");
    scanf("%d%d",&str1,&str2);
    printf("original number : %d and %d",str1,str2);
    printf("\nMultiple two said numbers represent as string : ");
    product=str1*str2;
    printf("%d",product);
}
/*output:
Input the two number : 100 15
original number : 100 and 15
Multiple two said numbers represent as string : 1500
*/