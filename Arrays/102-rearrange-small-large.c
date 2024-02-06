/*Write a program in C to rearrange an array in such an order that– small, large, second smallest, second largest, etc*/
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
    for (i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            for (j = i; j < size; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        else
        {
            for (k = i; k < size; k++)
            {
                if (array[i] < array[k])
                {
                    temp = array[i];
                    array[i] = array[k];
                    array[k] = temp;
                }
            }
        }
    }
    printf("\nThe new array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
/*output:
Input the size of the array : 9
Inpur 9 element in the array :
element - 0 : 5       
element - 1 : 8
element - 2 : 1
element - 3 : 4
element - 4 : 2
element - 5 : 9
element - 6 : 3
element - 7 : 7
element - 8 : 6
The given array is :
5 8 1 4 2 9 3 7 6   
The new array is :  
1 9 2 8 3 7 4 6 5
*/