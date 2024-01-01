/*Write a program in C to find the LCM of any two numbers*/
#include <stdio.h>
int main()
{
    int lcm1, lcm2, i, j, a, b, c, d, x;
    printf("Enter 1st number for LCM : ");
    scanf("%d", &lcm1);
    printf("Enter 2nd number for LCM : ");
    scanf("%d", &lcm2);
    a = lcm1;
    b = lcm2;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            j = i;
        }
    }
    c = a / j;
    d = b / j;
    a = a * d;
    b = b * c;
    x = (a + b) / 2;
    printf("The LCM of %d and %d is : %d", lcm1, lcm2, x);
    return 0;
}
/*output:
Enter 1st number for LCM : 15
Enter 2nd number for LCM : 20
The LCM of 15 and 20 is : 60
*/