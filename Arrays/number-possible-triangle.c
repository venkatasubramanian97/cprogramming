/*Triangle possible or not possible*/
#include <stdio.h>
int main()
{
    int array[3], i, a, b, c;
    printf("Input 3 element the array :\n");
    for (i = 0; i < 3; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The given array is : ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", array[i]);
    }
    a = array[0];
    b = array[1];
    c = array[2];
    if ((a + b) > c)
    {
        if ((a + c) > b)
        {
            if ((b + c) > a)
            {
                printf("\nThe number of possible triangle");
            }
            else
            {
                printf("\nThe number of not possible triangle");
            }
        }
        else
        {
            printf("\nThe number of not possible triangle");
        }
    }
    else
    {
        printf("\nThe number of not possible triangle");
    }
    return 0;
}
/*output:
Input 3 element the array :
element - 0 : 18
element - 1 : 9
element - 2 : 10
The given array is : 18 9 10   
The number of possible triangle
PS D:\c-program\arrays> ./output
Input 3 element the array :
element - 0 : 6
element - 1 : 18
element - 2 : 9
The given array is : 6 18 9 
The number of not possible triangle
*/