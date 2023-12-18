/*Write a C program which computes the area of various geometrical shapes using a menu-driven approach*/
#include <stdio.h>
int main()
{
	int length, width, base, height, a, n;
	float radius;
	printf("Input 1 then to find area of the rectangle\n");
	printf("Input 2 than to find area of the  circle\n");
	printf("Input 3 than to find area of the triangle\n");
	printf("Enter n value : ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("Enter length value : ");
		scanf("%d", &length);
		printf("Enter width value : ");
		scanf("%d", &width);
		printf("The area of the rectangle : %d", length * width);
		break;
	case 2:
		printf("Enter radius value : ");
		scanf("%f", &radius);
		radius = 3.14 * radius * radius;
		printf("The area of the circle : %f", radius);
		break;
	case 3:
		printf("Enter base value : ");
		scanf("%d", &base);
		printf("Enter height value : ");
		scanf("%d", &height);
		a = (base * height) / 2;
		printf("The area of the triangle : %d", a);
		break;
	defalut:
		printf("Not a area of the Shapes");
	}
	return 0;
}
/*output:
Input 1 then to find area of the rectangle
Input 2 than to find area of the  circle
Input 3 than to find area of the triangle
Enter n value : 3
Enter base value : 5
Enter height value : 6
The area of the triangle : 15*/