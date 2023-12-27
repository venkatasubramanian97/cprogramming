/*Write a program in C to print Floyd's Triangle. (to use for loop and while loop)*/
/*#include<stdio.h>
int main()
{
int i,j,a=0,b=1,x;
printf("Enter the number : ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
if(i%2==0)
{
a=1;
b=0;
}
else
{
a=0;
b=1;
}
for(j=1;j<=i;j++)
{
if(j%2==0)
{
printf("%d",a);
}
else
{
printf("%d",b);
}
}
printf("\n");
}
return 0;
}
output:
1
01
101
0101
10101*/
#include <stdio.h>
int main()
{
    int i = 1, j, a = 0, b = 1, x;
    printf("Enter the number : ");
    scanf("%d", &x);
    while (i <= x)
    {
        if (i % 2 == 0)
        {
            a = 1;
            b = 0;
        }
        else
        {
            a = 0;
            b = 1;
        }
        j = 1;
        while (j <= i)
        {
            if (j % 2 == 0)
            {
                printf("%d ", a);
            }
            else
            {
                printf("%d ", b);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
/*output:
Enter the number : 7
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 
1 0 1 0 1 0 1 */