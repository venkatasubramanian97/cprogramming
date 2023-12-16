/*Write a C program to check whether a triangle can be formed with the given values for the angles*/
#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("Enter three number : ");
	scanf("%d %d %d", &a, &b, &c);
	d = a + b + c;
	if (d == 180)
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("The triangle is not valid");
	}
	return 0;
}
/*output:
Enter three number : 45 70 35
The triangle is not valid*/