/*Write a program in C to find the minimum number of swaps required to gather all elements less than or equal to k*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, count = 0;
    printf("Input %d element of the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The given array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (array[i] > size)
        {
            count++;
        }
    }
    printf("\nThe minimum swap required is : %d", count);
    return 0;
}
/*output:
Input the array of size : 7
Input 7 element of the array :
element - 0 : 2
element - 1 : 7
element - 2 : 9
element - 3 : 5
element - 4 : 8
element - 5 : 7
element - 6 : 4
The given array is : 2 7 9 5 8 7 4
The minimum swap required is : 2
*/