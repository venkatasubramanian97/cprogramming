/*Write a program in C to delete an element at a desired position from an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element in the array in ascending order :\n", size);
    int array[size], i, position;
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
start:
end:
    printf("Input the position where to delete (0-%d): ", size - 1);

    scanf("%d", &position);
    if (position > size - 1)
        goto start;
    if (0 > position)
        goto end;
    printf("the new list is : ");
    for (i = 0; i <= position; i++)
    {
        if (i == position)
        {
            for (i = position; i < size - 1; i++)
            {
                array[i] = array[i + 1];
            }
            if (i == size - 1)
            {
                array[i] = 0;
            }
        }
    }
    for (i = 0; i < size - 1; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the size of array : 6
Input 6 element in the array in ascending order :
element - 0 : 12
element - 1 : 45
element - 2 : 67
element - 3 : 4
element - 4 : 34
element - 5 : 6
Input the position where to delete (0-5): 4 
the new list is : 12 45 67 4 6 
*/