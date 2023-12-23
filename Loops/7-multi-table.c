/*Write a C program to display the multiplier table vertically from 1 to n. (to use for loop)*/
#include<stdio.h>
int main()
{
int i,j,a,multi;
printf("Input upto the table number starting from 1 : ");
scanf("%d",&a);
printf("Multiplication table from 1 to %d\n",a);
for(i=1;i<=a;i++)
{
for(j=1;j<=a;j++)
{
mult=i*j;
printf("%d x %d = %d, ",i,j,mult);
}
printf("\n");
}
return 0;
}
/*output:
Input upto the table number starting from 1 : 3
Multiplication table from 1 to 3
1 x 1 = 1, 1 x 2 = 2, 1 x 3 = 3,
2 x 1 = 2, 2 x 2 = 4, 2 x 3 = 6,
3 x 1 = 3, 3 x 2 = 6, 3 x 3 = 9,*/