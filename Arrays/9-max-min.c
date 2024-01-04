/*Write a program in C to find the maximum and minimum elements in an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Inpur %d element in the array :\n", size);
    int i, maximum, minimum, array[size];
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    maximum = array[0];
    minimum = array[0];
    for (i = 1; i < size; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    printf("maximum element is : %d\n", maximum);
    for (i = 1; i < size; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    printf("minimum element is : %d", minimum);
    return 0;
}
/*output:
Input the number of elements to be stored in the array : 5
Inpur 5 element in the array :
element - 0 : 30
element - 1 : 20
element - 2 : 45
element - 3 : 5
element - 4 : 10
maximum element is : 45
minimum element is : 5
*/