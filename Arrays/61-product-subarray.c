/*Write a program in C to find the maximum product subarray in a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of the array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], i, j, product, sub = 0,last;
    for (i = 0; i < size; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The given array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    for (i = 0; i < size; i++)
    {
        product = array[i];
        if(product==array[size-1])
        {
            last=product;
        }
        for (j = i+1 ; j < size; j++)
        {
            product = product * (array[j]);

            if (sub < product )
            {
                sub = product;
            }
        }
    }
    if(sub<last)
    {
        sub=last;
    }
    printf("\nThe maximum product of a sub-array in the given array is : %d", sub);
    return 0;
}
/*output:
Input the size of the array : 8
Input 8 element in the array :
Element - 0 : -4
Element - 1 : 9
Element - 2 : -7
Element - 3 : 0
Element - 4 : -15
Element - 5 : 6
Element - 6 : 2
Element - 7 : -3
The given array is : -4 9 -7 0 -15 6 2 -3
The maximum product of a sub-array in the given array is : 540
*/