/*Write a C program to check
whether a triangle is Equilateral, Isosceles or Scalene*/
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a value : ");
	scanf("%d", &a);
	printf("Enter b value : ");
	scanf("%d", &b);
	printf("Enter c value : ");
	scanf("%d", &c);
	if (a == b && a == c)
	{
		printf("This is an equalateral triangle");
	}
	else if (a == b || a == c || b == c)
	{
		printf("This is an isosceles triangle");
	}
	else
	{
		printf("This is an scalene triangle");
	}
	return 0;
}
/*output:
Enter a value : 50
Enter b value : 40
Enter c value : 90
This is an scalene triangle*/