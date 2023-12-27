/*Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.(to use for loop and while loop)*/
/*#include<stdio.h>
int main()
{
int i,j;
printf("The pattern like :\n");
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);
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
        int j = 1;
        while (j <= i)
        {
            printf("%d", i);
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
22
333
4444*/
