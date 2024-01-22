/*Write a program in C to return the minimum number of jumps to reach the end of the array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j, k, length, sum, first = 0, jumps = 0;
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
start:
    for (i = first; i < size - 1; i++)
    {
        jumps++;
        length = i + array[i];
        if (length >= size - 1)
        {
            break;
        }
        sum = 0;
        for (j = i + 1; j <= length; j++)
        {
            if (sum < array[j])
            {
                sum = array[j];
            }
        }
        for (k = i + 1; k <= length; k++)
        {
            first++;
            if (sum == array[k])
            {
                break;
            }
        }
        if (first < size)
        {
            goto start;
        }
    }
    printf("\nThe minimum of number of jumps is required to reach the end is : %d", jumps);
    return 0;
}
/*output:
Input the array of size : 14
Input 14 element the array :
element - 0 : 1
element - 1 : 3
element - 2 : 5
element - 3 : 8
element - 4 : 9
element - 5 : 2
element - 6 : 6
element - 7 : 7
element - 8 : 6
element - 9 : 8
element - 10 : 9
element - 11 : 1
element - 12 : 1
element - 13 : 1
The given array is : 1 3 5 8 9 2 6 7 6 8 9 1 1 1
The minimum of number of jumps is required to reach the end is : 3
*/