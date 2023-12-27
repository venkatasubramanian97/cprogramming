/* Write a C program to make such a pattern as a pyramid with an asterisk. (to use for loop and while loop)*/
/*#include<stdio.h>
int main()
{
int i,j;
printf("The pattern like :\n");
for(i=1;i<=4;i++)
{
for(j=i;j<4;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}*/
#include <stdio.h>
int main()
{
   int i = 1;
   printf("The pattern like :\n");
   while (i <= 4)
   {
      int a = i;
      while (a < 4)
      {
         printf(" ");
         a++;
      }
      int j = 1;
      while (j <= i)
      {
         printf("* ");
         j++;
      }
      printf("\n");
      i++;
   }
   return 0;
}
/*output:
The pattern like :
   *
  * *
 * * *
* * * *
*/