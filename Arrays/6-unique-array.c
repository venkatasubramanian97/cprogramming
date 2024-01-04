/*Write a program in C to print all unique elements in an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], i, j, c;
    for (i = 0; i < size; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The unique elements found in the array are :\n");
    for (i = 0; i < size; i++)
    {
        c = 0;
        for (j = 0; j < size; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                c++;
            }
        }
        if (c == 0)
            printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Input the number of elements to be stored in the array : 5
Input 5 element in the array :
Element - 0 : 3
Element - 1 : 2
Element - 2 : 2
Element - 3 : 5
Element - 4 : 5
The unique elements found in the array are :
3
*/