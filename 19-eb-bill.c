/* Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer*/
#include <stdio.h>
int main()
{
	int id, unit;
	float unit1, surchage, total;
	printf("Enter the id : ");
	scanf("%d", &id);
	printf("Enter the customer unit : ");
	scanf("%d", &unit);
	if (unit >= 0 && unit <= 199)
	{
		unit1 = unit * 1.2;
		printf("amount charge@rs 1.20 per unit:%f\n", unit1);
	}
	else if (unit >= 200 && unit < 400)
	{
		unit1 = unit * 1.5;
		printf("amount charge@rs 1.50 per unit:%f\n", unit1);
	}
	else if (unit >= 400 && unit < 600)
	{
		unit1 = unit * 1.8;
		printf("amount charge@rs 1.80 per unit:%f\n", unit1);
	}
	else
	{
		unit1 = unit * 2;
		printf("amount charge@rs 2.00 per unit:%f\n", unit1);
	}
	if (unit1 > 400)
	{
		surchage = unit1 * 15 / 100;
		if (surchage <= 100)
		{
			surchage = 100;
		}
		printf("surchage amount:%f\n", surchage);
	}
	else
	{
		printf("surchage amount:%f\n", surchage);
	}
	total = surchage + unit1;
	printf("net amount paid by the customer:%f\n", total);
	return 0;
}
/*output:
Enter the id : 65467
Enter the customer unit : 250
amount charge@rs 1.50 per unit:375.000000
surchage amount:0.000000
net amount paid by the customer:375.000000

Enter the id : 786575
Enter the customer unit : 300
amount charge@rs 1.50 per unit:450.000000
surchage amount:100.000000
net amount paid by the customer:550.000000

Enter the id : 6009769
Enter the customer unit : 600
amount charge@rs 2.00 per unit:1200.000000
surchage amount:180.000000
net amount paid by the customer:1380.000000*/
