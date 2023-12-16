/* Write a C program to accept coordinate point  cin an XY coordinate system and determine in which quadrant the coordinate point lies*/
#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter the value : ");
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0)
	{
		printf("The coordinate point (%d,%d) lies in the First quadrant", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("The coordinate point (%d,%d) lies in the second quadrant", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("The coordinate point (%d,%d) lies in the third quadrant", x, y);
	}
	else
	{
		printf("The coordinate point (%d,%d) lies in the Fourth quadrant", x, y);
	}
	return 0;
}
/*output:
Enter the value : -4 6
The coordinate point (-4,6) lies in the second quadrant*/