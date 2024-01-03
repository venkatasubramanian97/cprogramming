/*Write a program in C to copy the elements of one array into another array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], copy[size], i;
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        copy[i] = array[i];
    }
    printf("The elements stored in the first array are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nThe elements copied into the second array are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", copy[i]);
    }
    return 0;
}
/*output:
Input the number of elements to be stored in the array : 5
Input 5 element in the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 1
element - 4 : 5
The elements stored in the first array are :
2 4 6 1 5
The elements copied into the second array are :
2 4 6 1 5
*/