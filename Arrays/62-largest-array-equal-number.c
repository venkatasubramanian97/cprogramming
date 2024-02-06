/*Write a program in C to find the largest subarray with an equal number of 0s and 1s*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, sum, one = 0, zero = 0, first = 0, last = 0;
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
        if (0 == array[i])
        {
            zero++;
        }
        if (1 == array[i])
        {
            one++;
        }
    }
    if (zero < one)
    {
        sum = zero;
    }
    else
    {
        sum = one;
    }
    last = sum + sum + last;
start:
    zero = 0;
    one = 0;
    for (i = first; i < last; i++)
    {
        if (0 == array[i])
        {
            zero++;
        }
        if (1 == array[i])
        {
            one++;
        }
    }
    if (zero < one || one < zero)
    {
        first++;
        last++;
        if (last > size)
        {
            last = size - 1;
        }
        goto start;
    }
    if (one == zero)
    {
        if(one==0)
        {
            printf("\nSubarray found from not the index");
        }
        else
        {
        printf("\nSubarray found from the index %d to %d", first, last - 1);
        }
    }
    return 0;
}
/*output:
Input the array of size : 10
Input 10 element the array :
element - 0 : 1
element - 1 : 1
element - 2 : 0
element - 3 : 1
element - 4 : 0 
element - 5 : 0
element - 6 : 1
element - 7 : 1
element - 8 : 0
element - 9 : 1
The given array is : 1 1 0 1 0 0 1 1 0 1 
Subarray found from the index 1 to 8     
*/