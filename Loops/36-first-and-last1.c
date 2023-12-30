/* Write a C program to display a such a pattern
for n rows using a number that starts with 1 and each row will have a 1
as the first and last number*/
#include <stdio.h>
int main()
{
  int i, j,a;
printf("Enter the number : ");
scanf("%d",&a);
  for (i = 1; i <= a; i++)
  {
    for (j = i; j < a; j++)
      printf(" ");
    for (j = 1; j < i; j++)
      printf("%d", j);
    for (j = i; j >= 1; j--)
      printf("%d", j);
    printf("\n");
  }
  return 0;
}
/*output:
  1
 121
12321
Enter the number : 5
    1
   121
  12321
 1234321
123454321*/