/*Write a program in C to find the sum of all elements of the array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], i, sum = 0;
    for (i = 0; i < size; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum of all elements stored in the array is : %d", sum);
    return 0;
}
/*output:
Input the number of elements to be stored in the array : 5
Input 5 element in the array :
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Element - 3 : 4
Element - 4 : 5
Sum of all elements stored in the array is : 15
*/