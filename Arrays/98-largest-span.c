/*Write a program in C to return the largest span found in the leftmost and rightmost appearances of the same value (values are inclusive) in a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], i, j, span;
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
    for (i = 0; i < size / 2; i++)
    {
        for (j = size - 1; j >  size / 2; j--)
        {
            if (array[i] == array[j])
            {
                span = j + 1-i;
                break;
            }
        }
        if (array[i] == array[j])
        {
            break;
        }
    }
    printf("\nThe span between the same values in the array is : %d", span);
    return 0;
}
/*output:
Input the size of array : 9
Input 9 element of the array :
element - 0 : 17
element - 1 : 42
element - 2 : 19
element - 3 : 7
element - 4 : 27
element - 5 : 24
element - 6 : 17
element - 7 : 54
element - 8 : 73
The given array is : 17 42 19 7 27 24 17 54 73
The span between the same values in the array is : 7
*/