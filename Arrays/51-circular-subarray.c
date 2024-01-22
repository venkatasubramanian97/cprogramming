/*Write a program in C to find the maximum circular subarray sum of a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, a, b = 0, d = 0,c=size, temp;
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
start:
    a = 0;
    for (i = 0; i < c; i++)
    {
        a = a + array[i];
        if (b < a)
        {
            b = a;
        }
    }
    for (i = 0; i < size - 1; i++)
    {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
    if(size==c)
    {
    c=size-1;
    }
    d++;
    if (d < size)
        goto start;
    printf("\nThe maximum circular sum in the above array is : %d", b);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the array of size : 9
Input 9 element of the array :
element - 0 : 10
element - 1 : 8
element - 2 : -20
element - 3 : 5
element - 4 : -3
element - 5 : -5
element - 6 : 10
element - 7 : -13
element - 8 : 11
The given array is : 10 8 -20 5 -3 -5 10 -13 11    
The maximum circular sum in the above array is : 29
*/