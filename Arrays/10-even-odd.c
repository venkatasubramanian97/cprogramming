/*Write a program in C to separate odd and even integers into separate arrays*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], i;
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The even number are :\n");
    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\nThe odd number are :\n");
    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 1)
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}
/*output:
Input the number of elements to be stored in the array : 5
Input 5 element in the array :
element - 0 : 50
element - 1 : 41
element - 2 : 35
element - 3 : 20
element - 4 : 10
The even number are :
50 20 10
The odd number are :
41 35
*/