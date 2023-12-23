/*Write a C program to display the first 10 natural numbers*/
/*#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("Number is : %d\n", i);
	}
	return 0;
}*/

#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("Number is : %d\n", i);
		i++;
	}
	return 0;
}

/*#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("Number is : %d\n", i);
		i++;
	} while (i <= 10);
	return 0;
}*/

/*output:
Number is : 1
Number is : 2
Number is : 3
Number is : 4
Number is : 5
Number is : 6
Number is : 7
Number is : 8
Number is : 9
Number is : 10*/