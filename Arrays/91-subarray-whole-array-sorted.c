/*An unsorted array of a specific size is given. Write a program in C to find the minimum length of a subarray such that sorting this subarray makes the whole array sorted*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of the array : ");
    scanf("%d", &size);
    int array[size], i, j, a;
    printf("Inpur %d element in the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The given array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nThe minimum length of unsorted subarray which makes the given array sorted\n");
    for (i = size - 1; i > 0; i--)
    {
        if (array[i] > array[i - 1])
        {
            continue;
        }
        a = array[i];
        break;
    }
    for (j = 0; j < size; j++)
    {
        if (array[j] < a && array[j] < array[j + 1])
        {
            continue;
        }
        break;
    }
    printf("lies between the indeces %d and %d", j, i-1);
    return 0;
}
/*output:
Input the size of the array : 11
Inpur 11 element in the array :
element - 0 : 10
element - 1 : 12
element - 2 : 15
element - 3 : 17
element - 4 : 28
element - 5 : 32
element - 6 : 42
element - 7 : 18
element - 8 : 56
element - 9 : 59
element - 10 : 67
The given array is :
10 12 15 17 28 32 42 18 56 59 67
The minimum length of unsorted subarray which makes the given array sorted
lies between the indeces 4 and 6*/