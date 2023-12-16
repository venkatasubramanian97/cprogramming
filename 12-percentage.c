/*Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division*/
#include <stdio.h>
int main()
{
	int rollno, physics, chemistry, computer, total;
	float percentage;
	printf("Roll No : ");
	scanf("%d", &rollno);
	printf("Mark in physics : ");
	scanf("%d", &physics);
	printf("Mark in chemistry : ");
	scanf("%d", &chemistry);
	printf("Mark in computer : ");
	scanf("%d", &computer);
	total = physics + chemistry + computer;
	printf("Total mark = %d\n", total);
	percentage = total / 3;
	printf("Percentage = %f\n", percentage);
	if (percentage >= 80)
	{
		printf("first");
	}
	else if (percentage >= 60)
	{
		printf("second");
	}
	else if (percentage >= 35)
	{
		printf("third");
	}
	else
	{
		printf("fail");
	}
	return 0;
}

/*output:
Roll No : 6546786
Mark in physics : 67
Mark in chemistry : 90
Mark in computer : 69
Total mark = 226
Percentage = 75.000000
second*/