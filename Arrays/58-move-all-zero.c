/*Write a program in C to move all zeroes to the end of a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j, temp;
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
        for (j = size - 1; j >= i; j--)
        {
            if (array[j] != 0 && array[i] == 0)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nThe new array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the array of size : 10
Input 10 element the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 0
element - 4 : 4
element - 5 : 0
element - 6 : 7
element - 7 : -5
element - 8 : 8
element - 9 : 0
The given array is : 2 5 7 0 4 0 7 -5 8 0 
The new array is :
2 5 7 8 4 -5 7 0 0 0 
*/