/*Write a program in C to find the missing number in a given array. There are no duplicates in the list*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, count = 1;
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
end:
    for (i = 0; i < size; i++)
    {
        if (count == array[i])
        {
            count++;
            goto end;
        }
    }
    printf("\nThe missing number is : %d", count);
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element the array :
element - 0 : 1
element - 1 : 3
element - 2 : 6
element - 3 : 4
element - 4 : 5
The given array is : 1 3 6 4 5
The missing number is : 2
*/