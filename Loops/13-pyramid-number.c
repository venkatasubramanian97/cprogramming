/*Write a program in C to make a pyramid pattern with numbers increased by 1. (to use for loop and while loop)*/
/*#include<stdio.h>
int main()
{
int i,j,b=1;
printf("The pattern like :\n");
for(i=1;i<=4;i++)
{
for(j=i;j<4;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d ",b++);
}
printf("\n");
}
return 0;
}*/
#include <stdio.h>
int main()
{
   int i = 1, a, b = 1;
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
         printf("%d ", b++);
         j++;
      }
      printf("\n");
      i++;
   }
   return 0;
}
/*output:
The pattern like :
   1
  2 3
 4 5 6
7 8 9 10*/