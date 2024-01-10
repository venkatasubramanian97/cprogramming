/*Write a program in C to find a pair with given sum in the array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j, sum, a[1];
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The given array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nInput the given sum : ");
    scanf("%d", &sum);
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == sum)
            {
                printf("Pair of element can make the given sum of the value of index %d and %d\n", i, j);
                a[i] = array[i];
                break;
            }
        }
        if (array[i] == a[i])
        {
            break;
        }
    }
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
The given array : 1 2 3 4 5
Input the given sum : 9
Pair of element can make the given sum of the value of index 3 and 4
*/