/*Write a program in C to find the largest sum of contiguous subarrays in an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j, k, a = 0, b, sum = 0;
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
        a = 0;
        for (j = i; j < size; j++)
        {
            a = a + (array[j]);

            if (sum < a)
            {
                sum = a;
            }
        }
    }
    printf("\nThe largest sum of continguous subarray is : %d ", sum);
    return 0;
}
/*output:
Input the array of size : 4
Input 4 element the array :
element - 0 : 100
element - 1 : 250
element - 2 : -200
element - 3 : 1
The given array is : 100 250 -200 1
The largest sum of continguous subarray is : 350 
*/