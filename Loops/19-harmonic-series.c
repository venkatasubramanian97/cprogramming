/* Write a program in C to display the n terms of a harmonic series and their sum.(to use for loop)
	1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms*/
#include <stdio.h>
int main()
{
	int a, i;
	float sum = 0, c,b=1;
	printf("Enter the number of terms : ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		c = b / i;
		sum = sum + c;
	}
	printf("Sum of series upto %d terms : %f", a, sum);
	return 0;
}
/*output:
Enter the number of terms : 5
Sum of series upto 5 terms : 2.283334
D:\c-program\pattren>.\output
Enter the number of terms : 6
Sum of series upto 6 terms : 2.450000*/