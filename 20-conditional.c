/* Write a program in C to accept a grade and declare the equivalent description */
#include <stdio.h>
int main()
{
	char c;
	printf("enter the character:");
	scanf("%c", &c);
	if (c == 'e')
	{
		printf("you have chosen:excellent");
	}
	else if (c == 'v')
	{
		printf("you have chosen:verygood");
	}
	else if (c == 'g')
	{
		printf("you have chosen:good");
	}
	else if (c == 'a')
	{
		printf("you have chosen:average");
	}
	else
	{
		printf("you have chosen:fail");
	}
	return 0;
}