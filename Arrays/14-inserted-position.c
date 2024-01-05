/*Write a program in C to insert values in the array (unsorted list)*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element in the array in ascending order :\n", size);
    int array[size], i, value, position;
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("Input the position,where the value to be inserted : ");
    scanf("%d", &position);
    printf("The exist array list is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    for (i = size - 1; i >= position-1; i--)
    {
        array[i + 1] = array[i];
        array[i]=value;
    }
    printf("\nafter insert the list is :\n");
    for (i = 0; i <= size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output
Input the size of array : 5
Input 5 element in the array in ascending order :
element - 0 : 1
element - 1 : 4
element - 2 : 7
element - 3 : 9
element - 4 : 0
Input the value to be inserted : 88
Input the position,where the value to be inserted : 3
The exist array list is :
1 4 7 9 0
after insert the list is :
1 4 88 7 9 0
*/