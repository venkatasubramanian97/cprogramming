/*Write a C program to check whether a character is uppercase or lowercase alphabet*/
#include <stdio.h>
int main()
{
	char a;
	printf("Enter the character : ");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("The character %c is lowercase", a);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("The character %c is uppercase", a);
	}
	else
	{
		printf("Not a character");
	}
	return 0;
}
/*output:
Enter the character : V
The character V is uppercase*/