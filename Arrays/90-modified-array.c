/*Given an array of size n such that every element is in the range from 0 to n-1. Write a program in C to rearrange the given array so that arr[i] becomes arr[arr[i]]*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], modifly[size], i, j, rearrange;
    printf("Input %d element of the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        if (array[i] > size - 1 || array[i] < 0)
        {
            printf("the element value 0 to %d\nelement - %d : ", size - 1, i);
            scanf("%d", &array[i]);
        }
    }
    printf("The given array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    for (i = 0; i < size; i++)
    {
        rearrange = array[i];
        for (j = 0; j < size; j++)
        {
            if (j == rearrange)
            {
                modifly[i] = array[j];
                break;
            }
        }
    }
    printf("\nThe modified array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", modifly[i]);
    }
    return 0;
}

/*output:
Input the array of size : 5
Input 5 element of the array :
element - 0 : 2
element - 1 : 1
element - 2 : 4
element - 3 : 3
element - 4 : 0
The given array is : 2 1 4 3 0
The modified array is : 4 1 0 3 2
*/