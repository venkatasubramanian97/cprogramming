/*Write a program in C to insert the values in the array (sorted list)*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element in the array in ascending order :\n", size);
    int array[size+1], i, value;
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("The exist array list is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    if(array[size-1]<value)
    array[size-1+1]=value;
    else
    {
    for (i = size - 1; array[i] >= value; i--)
    {
        array[i + 1] = array[i];
        array[i] = value;
    }
    }
    printf("\nafter insert the list is :\n");
    for (i = 0; i <= size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the size of array : 5
Input 5 element in the array in ascending order :
element - 0 : 1
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 4
Input the value to be inserted : 3
The exist array list is :
1 4 6 8 4
after insert the list is :
1 3 4 6 8 4
*/
