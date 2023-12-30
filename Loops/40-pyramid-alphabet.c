/*Write a C program to display the pyramid pattern using the alphabet*/
#include <stdio.h>
int main()
{
   int i, j,a;
printf("Enter the number : ");
scanf("%d",&a);
a=65+a-1;
   for (i = 65; i <= a; i++)
   {
      for (j = i; j < a; j++)
         printf(" ");
      for (j = 65; j < i; j++)
         printf("%c", j);
      for (j = i; j >= 65; j--)
         printf("%c", j);
      printf("\n");
   }
   return 0;
}
/*output:
   A
  ABA
 ABCBA
ABCDCBA
Enter the number : 5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA*/