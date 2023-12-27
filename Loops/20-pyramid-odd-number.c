/*Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks. (to use for loop and while loop)*/
/*#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i=i+2)
{
for(j=i;j<5;j=j+2)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}*/
#include <stdio.h>
int main()
{
  int i = 1, j;
  while (i <= 5)
  {
    j = i;
    while (j < 5)
    {
      printf(" ");
      j += 2;
    }
    int a = 1;
    while (a <= i)
    {
      printf("*");
      a++;
    }
    printf("\n");
    i += 2;
  }
  return 0;
}
/*output:
  *
 ***
*****
*/