/* Write a C program to calculate profit and loss on a transaction*/
#include <stdio.h>
int main()
{
	int selling, cost;
	printf("Enter the selling price : ");
	scanf("%d", &selling);
	printf("Enter the cost price : ");
	scanf("%d", &cost);
	if (selling > cost)
	{
		printf("You can booked your profit amount : %d", selling - cost);
	}
	else
	{
		printf("You can booked your loss amount : %d", cost - selling);
	}
	return 0;
}

/*output:
Enter the selling price : 700
Enter the cost price : 300
You can booked your profit amount : 400*/