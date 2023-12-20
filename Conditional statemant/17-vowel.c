/*Write a C program to check whether an alphabet is a vowel or a consonant*/
#include <stdio.h>
int main()
{
	char alphabet;
	printf("Enter the alphabet : ");
	scanf("%c", &alphabet);
	if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
	{
		printf("The alphabet is a vowel");
	}
	else if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
	{
		printf("The alphabet is a vowel");
	}
	else
	{
		printf("The alphabet is a consonant");
	}
	return 0;
}

/*output:
Enter the alphabet : A
The alphabet is a vowel*/
