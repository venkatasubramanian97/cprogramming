/*Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i]*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], product[size], multi, i, j;
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
        multi = 1;
        for (j = 0; j < size; j++)
        {
            if (i != j)
            {
                multi *= array[j];
            }
        }
        product[i] = multi;
    }
    printf("\nThe product array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", product[i]);
    }
    return 0;
}
/*output:
Input the array of size : 6
Input 6 element the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
The given array is : 1 2 3 4 5 6 
The product array is :
720 360 240 180 144 120 
*/