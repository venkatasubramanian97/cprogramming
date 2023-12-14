/*Write a C program to find the largest of three numbers*/
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three number : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("1st number = %d,\t", a);
	printf("2nd number = %d,\t", b);
	printf("3rd number = %d.\n", c);
	if (a > b)
	{
		if (a > c)
		{
			printf("The 1st Number is the greatest among three");
		}
		else
		{
			printf("The 3rd Number is the greatest among three");
		}
	}
	else
	{
		if (b > c)
		{
			printf("The 2nd Number is the greatest among three");
		}
		else
		{
			printf("The 3rd Number is the greatest among three");
		}
	}
	return 0;
}

/*output:
Enter three number : 23 56 78
1st number = 23,        2nd number = 56,        3rd number = 78,
The 3rd Number is the greatest among three*/