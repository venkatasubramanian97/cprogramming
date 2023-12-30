/*Write a program in C to display a pattern like a diamond*/
#include <stdio.h>
int main()
{
   int a, i, j;
   printf("Enter the number of value : ");
   scanf("%d", &a);
   a=a+a-1;
   for (i = 1; i <= a; i += 2)
   {
      for (j = i; j < a; j += 2)
         printf(" ");
      for (j = 1; j <= i; j++)
         printf("*");
      printf("\n");
   }
   for (i = 2; i <= a; i += 2)
   {
      for (j = 2; j <= i; j += 2)
         printf(" ");
      for (j = i; j < a; j++)
         printf("*");
      printf("\n");
   }
   return 0;
}
/*output:
Enter the number of value : 7
   *
  ***
 *****
*******
 *****
  ***
   *
Enter the number of value : 6
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *
*/
