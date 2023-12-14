/*Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/
#include <stdio.h>
int main()
{
	int m, n;
	printf("Enter the value : ");
	scanf("%d", &m);
	if (m >= 1)
	{
		n = 1;
		printf("The value of n = %d", n);
	}
	else if (m == 0)
	{
		n = 0;
		printf("The value of n = %d", n);
	}
	else
	{
		n = -1;
		printf("The value of n = %d", n);
	}
	return 0;
}

/*output:

Enter the value : -9
The value of n = -1*/