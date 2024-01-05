/*Write a program in C to sort elements of an array in ascending order*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], i, j, ascending;
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                ascending = array[i];
                array[i] = array[j];
                array[j] = ascending;
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
element - 0 : 2
element - 1 : 5
element - 2 : 3
element - 3 : 8
element - 4 : 1
Element of array in sorted ascending arder :
1 2 3 5 8
*/