/*Write a program in C to find the ceiling in a sorted array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, position;
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
    printf("\nInput the ceiling of array : ");
    scanf("%d", &position);
    printf("The ceiling of %d is : ", position);
    for (i = 0; i < size; i++)
    {
        if (position <= array[i])
        {
            printf("%d", array[i]);
            break;
        }
        if (position > array[size - 1])
        {
            printf("%d", -1);
            break;
        }
    }
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element of the array :
element - 0 : 10
element - 1 : 20
element - 2 : 5
element - 3 : 30
element - 4 : 29
The given array is : 10 20 5 30 29
Input the ceilingof array : 7
The ceiling of 7 is : 10
*/