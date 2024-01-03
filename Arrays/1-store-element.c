/*Write a program in C to store elements in an array and print them*/
#include <stdio.h>
int main()
{
    int array[10], i;
    printf(" Input 10 elements in the array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Element in array are : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
/*output:
Element - 0 : 5
Element - 1 : 7
Element - 2 : 2
Element - 3 : 4
Element - 4 : 8
Element - 5 : 9
Element - 6 : 2
Element - 7 : 41
Element - 8 : 4
Element - 9 : 5
Element in array are : 5 7 2 4 8 9 2 41 4 5
*/