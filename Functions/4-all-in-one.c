#include<stdio.h>
void circle();
void rectangle();
void cubiod();
void main()
{
    circle();
    rectangle();
    cubiod();
}
void circle()
{
    int radius;
    float circle;
    printf("Input the radius value : ");
    scanf("%d",&radius);
    circle=3.14*radius*radius;
    printf("Area of the circle : %f",circle);
}
void rectangle()
{
    int length,width;
    printf("\nInput the length and width of the value : ");
    scanf("%d%d",&length,&width);
    printf("Area of rectangle : %d",length*width);
}
void cubiod()
{
    int length, height, width;
    printf("\nInput the length ,height and width of the value : ");
    scanf("%d%d%d", &length, &height, &width);
    printf("Volume of cubiod : %d",length*height*width);
}
/*output:
Input the radius value : 5
Area of the circle : 78.500000
Input the length and width of the value : 10 5
Area of rectangle : 50
Input the length ,height and width of the value : 10 5 14
Volume of cubiod : 700
*/
