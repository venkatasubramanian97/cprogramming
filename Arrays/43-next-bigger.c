/*Write a program in C to print the next greatest elements in a given unsorted array. Elements for which no superior element exists, consider the next greatest element as -1*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of the size : ");
    scanf("%d", &size);
    int array[size], i, j, biggest[size],k=-1, a = 0;
    printf("Input %d element of the array :\n", size);
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
    printf("\nNext bigger element are :\n");
    for (i = 0; i < size; i++)
    {
        printf("Next bigger element of %d in the array is : ", array[i]);
        for (j = i + 1; j < size; j++)
        {
            a=array[j];
            if (array[i] < array[j])
            {
                printf("%d", array[j]);
                biggest[i] = array[j];
                break;
            }
        }
        if (array[i] > a||array[i]==array[size-1])
        {
            printf("%d", k);
            biggest[i] = k;
        }
        printf("\n");
    }
    printf("Next bigger element array :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", biggest[i]);
    }
    return 0;
}
/*output:
Input the array of the size : 6
Input 6 element of the array :
element - 0 : 5
element - 1 : 6
element - 2 : 10
element - 3 : 9
element - 4 : 5
element - 5 : 13
The given array is : 5 6 10 9 5 13
Next bigger element are :
Next bigger element of 5 in the array is : 6  
Next bigger element of 6 in the array is : 10 
Next bigger element of 10 in the array is : 13
Next bigger element of 9 in the array is : 13 
Next bigger element of 5 in the array is : 13 
Next bigger element of 13 in the array is : -1
Next bigger element array :
6 10 13 13 13 -1
*/