/*Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row. (to use for loop and while loop)*/
/*#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=i;j<4;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d ",i);
}
printf("\n");
}
return 0;
}*/
#include <stdio.h>
int main()
{
   int i = 1, j;
   while (i <= 4)
   {
      j = i;
      while (j < 4)
      {
         printf(" ");
         j++;
      }
      int a = 1;
      while (a <= i)
      {
         printf("%d ", i);
         a++;
      }
      printf("\n");
      i++;
   }
   return 0;
}
/*output:
   1
  2 2
 3 3 3
4 4 4 4*/