/*Write a program in C to rearrange an array such that even index elements are smaller and odd index elements are greater than their next*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of the array : ");
    scanf("%d", &size);
    int array[size], i, j, k, temp;
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
    for (i = 0; i < size - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        else
        {
            if (array[i] < array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    printf("\nThe new array after rearranging :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
/*output:
Input the size of the array : 6
Inpur 6 element in the array :
element - 0 : 6      
element - 1 : 4
element - 2 : 2
element - 3 : 1
element - 4 : 8
element - 5 : 3
The given array is :
6 4 2 1 8 3
The new array after rearranging :
4 6 1 8 2 3
*/