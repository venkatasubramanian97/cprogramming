/*Write a program in C to find the maximum element in an array that is first increasing and then decreasing*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of the array : ");
    scanf("%d", &size);
    int array[size], i, j, big[size], maximum = 0, k = 0;
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
    for (i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            if (array[i] < array[i + 1])
            {
                continue;
            }
            else
            {
                big[k] = array[i];
                k++;
            }
        }
        else
        {
            big[k] = array[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        if (maximum < big[i])
        {
            maximum = big[i];
        }
    }
    printf("\nThe maximum element which is increasing then decreasing is : %d", maximum);
    return 0;
}
/*output:
Input the size of the array : 8
Inpur 8 element in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 12
element - 3 : 25
element - 4 : 4
element - 5 : 57
element - 6 : 27
element - 7 : 44
The given array is :
2 7 12 25 4 57 27 44
The maximum element which is increasing then decreasing is : 57
*/