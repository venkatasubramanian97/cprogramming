/*Write a program in C to rotate an array by N positions*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, j, position, temp;
    printf("Input %d element of the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The given array is : ", i);
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
start:
end:
    printf("Input the rotating a position of the array(1-%d) : ", size);
    scanf("%d", &position);
    if (position > size)
        goto start;
    if (1 > position)
        goto end;
    printf("Before %dth position the value of the array are : ", position);
    for (i = 0; i < position; i++)
    {
        temp = array[0];
        printf("%d ", temp);
        for (j = 0; j < size - 1; j++)
        {
            array[j] = array[j + 1];
        }
        array[size - 1] = temp;
    }
    printf("\nAfter rotating from %d position the array is :\n", position);
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element of the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
The given array is : 1 2 3 4 5
Input the rotating a position of the array(1-5) : 3
Before 3th position the value of the array are : 1 2 3 
After rotating from 3 position the array is :
4 5 1 2 3
*/