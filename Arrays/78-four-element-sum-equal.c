/*Write a program in C to find four array elements whose sum is equal to a given number*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], number, i, j, k, l, sum = 0;
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
    printf("\nThe enter given number : ");
    scanf("%d", &number);
    printf("The element are :\n");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            for (k = j + 1; k < size; k++)
            {
                for (l = k + 1; l < size; l++)
                {
                    sum = sum + array[i] + array[j] + array[k] + array[l];
                    if (sum == number)
                    {
                        printf("%d,%d,%d,%d", array[i], array[j], array[k], array[l]);
                        break;
                    }
                    sum = 0;
                }
                if (sum == number)
                {
                    break;
                }
            }
            if (sum == number)
            {
                break;
            }
        }
        if (sum == number)
        {
            break;
        }
    }
    return 0;
}
/*output:
Input the size of array : 10
Input 10 element of the array :
element - 0 : 3       
element - 1 : 7
element - 2 : 1
element - 3 : 9
element - 4 : 15
element - 5 : 14
element - 6 : 6
element - 7 : 2
element - 8 : 5
element - 9 : 7
The given array is : 3 7 1 9 15 14 6 2 5 7 
The enter given number : 37
The element are :
3,15,14,5        
*/