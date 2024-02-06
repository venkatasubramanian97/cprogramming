/*Write a program in C to rearrange positive and negative numbers alternatively in a given array.
    N.B.: If positive numbers are more they appear at the end and for also negative numbers, they too appear in the end of the array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of the array : ");
    scanf("%d", &size);
    int array[size], rearrange[size], i, j, k, temp;
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
        if (i % 2 == 0)
        {
            for (j = i; j < size; j++)
            {
                if (0 > array[j])
                {
                    rearrange[i] = array[j];
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                    break;
                }
                else
                {
                    rearrange[i]=array[i];
                }
            }
        }
        else
        {
            for (k = i; k < size; k++)
            {
                if (0 < array[k])
                {
                    rearrange[i] = array[k];
                    temp = array[k];
                    array[k] = array[i];
                    array[i] = temp;
                    break;
                }
                else
                {
                    rearrange[i]=array[i];
                }
            }
        }
    }
    printf("\nThe rearranged array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", rearrange[i]);
    }
}
/*output:
Input the size of the array : 11
Inpur 11 element in the array :
element - 0 : -4
element - 1 : 8
element - 2 : -5
element - 3 : -6
element - 4 : 5
element - 5 : -9
element - 6 : 7
element - 7 : 1
element - 8 : -21
element - 9 : -11
element - 10 : 19
The given array is :
-4 8 -5 -6 5 -9 7 1 -21 -11 19 
The rearranged array is :      
-4 8 -5 5 -6 7 -9 1 -21 19 -11 
*/