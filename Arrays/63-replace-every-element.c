/*Write a program in C to replace every element with the greatest element on its right side*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], modified[size], i, j, replace = 0;
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
        if (replace == array[i])
        {
            replace = 0;
            for (j = i + 1; j < size; j++)
            {
                if (array[i] > array[j])
                {
                    if (replace < array[j])
                    {
                        replace = array[j];
                    }
                }
            }
        }
        for (j = i + 1; j < size; j++)
        {
            if (array[i] <= array[j])
            {
                if (replace < array[j])
                {
                    replace = array[j];
                }
            }
        }
        modified[i] = replace;
    }
    printf("\nAfter replace the modified array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", modified[i]);
    }
    return 0;
}
/*output:
Input the array of size : 10
Input 10 element the array :
element - 0 : 7
element - 1 : 5
element - 2 : 8
element - 3 : 9
element - 4 : 6
element - 5 : 8
element - 6 : 5
element - 7 : 7
element - 8 : 4
element - 9 : 6
The given array is : 7 5 8 9 6 8 5 7 4 6 
After replace the modified array is :    
9 9 9 8 8 7 7 6 6 0 
*/