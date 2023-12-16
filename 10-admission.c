/*Write a C program to determine eligibility for admission to a professional course based on the following ceritaria*/
#include <stdio.h>
int main()
{
	int physics, chemistry, maths, total, total1;
	printf("The mark is physics >=55 : ");
	scanf("%d", &physics);
	printf("The mark is chemistry >=50 : ");
	scanf("%d", &chemistry);
	printf("The mark is maths >=65 : ");
	scanf("%d", &maths);
	total = physics + chemistry + maths;
	printf("Total mark of Maths, Physics and Chemistry : %d", total);
	total1 = maths + physics;
	printf("\nTotal mark of maths and physics : %d", total1);
	if (total >= 190 || total1 >= 140)
	{
		printf("\nThe candidate is eligible for admission");
	}
	else
	{
		printf("\nThe candidate is not eligible for admission");
	}
	return 0;
}

/*output:
The mark is physics >=55 : 71
The mark is chemistry >=50 : 30
The mark is maths >=65 : 75
Total mark of Maths, Physics and Chemistry : 176
Total mark of maths and physics : 146
The candidate is eligible for admission*/
