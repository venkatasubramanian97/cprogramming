/*Write a program in C to find the smallest positive number missing from an unsorted array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of the size : ");
    scanf("%d", &size);
    int array[size], i, count = 1;
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
    printf("\nThe smallest positive number missied is : ");
start:
    for (i = 0; i < size; i++)
    {
        if (count == array[i])
        {
            count++;
            goto start;
        }
    }
    printf("%d", count);
    return 0;
}
/*output:
Input the array of the size : 9
Input 9 element of the array :
element - 0 : -5
element - 1 : -10
element - 2 : 3
element - 3 : 1
element - 4 : 4
element - 5 : 10
element - 6 : 2
element - 7 : 15
element - 8 : -20
The given array is : -5 -10 3 1 4 10 2 15 -20 
The smallest positive number missied is : 5
*/