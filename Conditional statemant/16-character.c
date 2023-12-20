/* Write a C program to check whether a character is an alphabet, digit or special character*/
#include <stdio.h>
int main()
{
	char character;
	printf("enter the character:");
	scanf("%c", &character);

	if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')
	{
		printf("This is a alphabet");
	}
	else if (character >= '0' && character <= '9')
	{
		printf("This is a digit");
	}
	else
	{
		printf("This is a special character");
	}
	return 0;
}
/*output:
enter the character:*
This is a special character*/