/*Write a program in C to make such a pattern like a right angle triangle with the number increased by 1. (to use for loop and while loop)*/
/*#include<stdio.h>
int main()
{
int i,j,b=1;
printf("The pattern like :\n");
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",b++);
}
printf("\n");
}
return 0;
}*/
#include <stdio.h>
int main()
{
    int i = 1, b = 1;
    printf("The pattern like :\n");
    while (i <= 4)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d", b++);
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
23
456
78910*/
