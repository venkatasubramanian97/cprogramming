/* Write a C program to calculate the distance between two points*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, x1, x2, y1, y2;
    float root;
    printf("Enter x1 value : ");
    scanf("%d", &x1);
    printf("Enter y1 value : ");
    scanf("%d", &y1);
    printf("Enter x2 value : ");
    scanf("%d", &x2);
    printf("Enter y2 value : ");
    scanf("%d", &y2);
    a = (x2 - x1) * (x2 - x1);
    b = (y2 - y1) * (y2 - y1);
    root = sqrt(a + b);
    printf("Distance between the said points : %f", root);
    return 0;
}

/*output:
Enter x1 value : 25
Enter y1 value : 15
Enter x2 value : 35
Enter y2 value : 10
Distance between the said points : 11.180340*/