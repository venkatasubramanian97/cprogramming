/*area of a rectangle*/
#include<stdio.h>
void rectangle(int,int);
void main()
{
    int length,width;
    printf("Input the length and width of the value : ");
    scanf("%d%d",&length,&width);
    rectangle(length,width);
}
void rectangle(int length,int width)
{
    printf("Area of the rectangle : %d",length*width);
}
/*output:
Input the length and width of the value : 10 5
Area of the rectangle : 50
*/