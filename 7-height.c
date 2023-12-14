/* Write a C program to accept the height of a person in centimeters and categorize the person according to their height*/
#include <stdio.h>
int main()
{
	int height;
	printf("Enter the height : ");
	scanf("%d", &height);
	if (height <= 150)
	{
		printf("The person is dwarf");
	}
	else if (height > 150 & height < 165)
	{
		printf("The person is average height");
	}
	else
	{
		printf("The person is tall");
	}
	return 0;
}

/*output:
Enter the height : 165
The person is tall*/