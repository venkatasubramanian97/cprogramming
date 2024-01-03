/*Write a program in C to read n number of values in an array and display them in reverse order*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &size);
    int array[size], i, c, k;
    printf("Input %d number of elements in the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The values store into the array are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    k = size - 1;
    for (i = 0; i < size / 2; i++)
    {
        c = array[i];
        array[i] = array[k - i];
        array[k - i] = c;
    }
    printf("\nThe values store into the array in reverse are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the number of elements to store in the array : 5
Input 5 number of elements in the array :
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Element - 3 : 4
Element - 4 : 5
The values store into the array are :
1 2 3 4 5
The values store into the array in reverse are :
5 4 3 2 1
*/