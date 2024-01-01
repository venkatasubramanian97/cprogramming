/*Write a C program to find the LCM of any two numbers using HCF*/
#include <stdio.h>
int main()
{
    int lcm1, lcm2, i, j, x;
    printf("Enter 1st number for LCM : ");
    scanf("%d", &lcm1);
    printf("Enter 2nd numnber for LCM : ");
    scanf("%d", &lcm2);
    for (i = 1; i <= lcm1; i++)
    {
        if (lcm1 % i == 0 && lcm2 % i == 0)
        {
            j = i;
        }
    }
    x = lcm1 * lcm2 / j;
    printf("The LCM of %d and %d is : %d", lcm1, lcm2, x);
    return 0;
}
/*output:
Enter 1st number for LCM : 15
Enter 2nd numnber for LCM : 20
The LCM of 15 and 20 is : 60
*/