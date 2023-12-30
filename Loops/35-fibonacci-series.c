/* Write a program in C to display the first n terms of the Fibonacci series*/
#include <stdio.h>
int main()
{
    int y, i, a = 0, b = 1, c=1,d;
    printf("Enter number of terms to display : ");
    scanf("%d", &y);
    printf("Here is the fibonacci series upto to %d terms :\n", y);
    if(1==y)
    printf("%d",a);
    else if(2==y)
    printf("%d %d", a, b);
    else
    printf("%d %d %d",a,b,c);
    for (i = 4; i <= y; i++)
    {
        d = a + b + c;
        printf(" %d", d);
        a = b;
        b = c;
        c = d;
    }
    return 0;
}
/*output:
Enter number of terms to display : 12
Here is the fibonacci series upto to 12 terms :
0 1 1 2 3 5 8 13 21 34 55 89
Enter number of terms to display : 6
Here is the fibonacci series upto to 6 terms :
0 1 1 2 4 7*/
