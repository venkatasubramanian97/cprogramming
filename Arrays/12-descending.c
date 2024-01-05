/*Write a program in C to sort the elements of the array in descending order*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], i, j, descending;
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] < array[j])
            {
                descending = array[i];
                array[i] = array[j];
                array[j] = descending;
            }
        }
    }
    printf("Element of array in sorted ascending arder :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the size of array : 5
Input 5 element in the array :
element - 0 : 1
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 2
Element of array in sorted ascending arder :
7 5 4 2 1
*/