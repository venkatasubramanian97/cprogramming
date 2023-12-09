#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, d;
	float root1, root2;
	printf("Enter three number : ");
	scanf("%d%d%d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d >= 0)
	{
		root1 = (-b + sqrt(d)) / 2 * a;
		root2 = (-b - sqrt(d)) / 2 * a;
		printf("root1:%f,\t", root1);
		printf("root2:%f\t", root2);
	}
	else
	{
		printf("root are imaginary;no solution");
	}
	return 0;
}

/*output:
Enter three number : 1 6 5
root1:-1.000000,        root2:-5.000000*/
