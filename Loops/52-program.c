/*Write a C program to find the sum of the G.P. series*/
#include <stdio.h>
int main()
{
    float first, terms, ratio, total = 0, i;
    printf("Enter the first number of the G.P.series : ");
    scanf("%f", &first);
    printf("Enter the number or terms in the G.P.series : ");
    scanf("%f", &terms);
    printf("Enter the common ratio of G.P.series : ");
    scanf("%f", &ratio);
    for (i = 1; i <= terms; i++)
    {
        printf("%f ", first);
        total = total + first;
        first = first * ratio;
    }
    printf("\nThe sum of the G.P.sries : %f", total);
    return 0;
}
/*output:
Enter the first number of the G.P.series : 3
Enter the number or terms in the G.P.series : 5
Enter the common ratio of G.P.series : 2
3.000000 6.000000 12.000000 24.000000 48.000000 
The sum of the G.P.sries : 93.000000
*/