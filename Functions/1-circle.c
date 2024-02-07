/*area of a circle*/
#include<stdio.h>
float area(int);
void main()
{
    int radius;
    printf("Input the radius value : ");
    scanf("%d",&radius);
    printf("Area of the circle : %f",area(radius));
}
float area(int radius)
{
    float circle;
    circle=3.14*radius*radius;
    return circle;
}
/*output:
Input the radius value : 5
Area of the circle : 78.500000
*/