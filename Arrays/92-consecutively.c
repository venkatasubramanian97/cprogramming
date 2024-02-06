/*Write a program in C that checks whether the elements in an unsorted array appear consecutively or not*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, j, count = 0, minimum;
    printf("Input %d element of the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        minimum = array[0];
    }
    printf("The given array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    for (i = 1; i < size; i++)
    {
        if (minimum > array[i])
        {
            minimum = array[i];
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (minimum == array[j])
            {
                count++;
                break;
            }
        }
        minimum++;
    }
    if (count == size)
    {
        printf("\nThe appearence of element in the array are consecutive");
    }
    else
    {
        printf("\nThe appearence of element in the array are not consecutive");
    }
    return 0;
}
/*output:
Input the array of size : 6
Input 6 element of the array :
element - 0 : 7          
element - 1 : 4
element - 2 : 3
element - 3 : 5
element - 4 : 6
element - 5 : 2
The given array is : 7 4 3 5 6 2
The appearence of element in the array are consecutive
PS D:\c-program\arrays> .\output
Input the array of size : 6
Input 6 element of the array :
element - 0 : 7 
element - 1 : 4
element - 2 : 4
element - 3 : 5
element - 4 : 6
element - 5 : 2
The given array is : 7 4 4 5 6 2
The appearence of element in the array are not consecutive
*/