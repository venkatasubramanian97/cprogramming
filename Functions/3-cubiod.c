/*volume of cubiod*/
#include <stdio.h>
int cubiod();
void main()
{
    int cube;
    cube = cubiod();
    printf("Volume of cubiod : %d", cube);
}
int cubiod()
{
    int length, height, width;
    printf("Input the length ,height and width of the value : ");
    scanf("%d%d%d", &length, &height, &width);
    return (length * height * width);
}
/*output:
Input the length ,height and width of the value : 14 10 5
Volume of cubiod : 700
*/
