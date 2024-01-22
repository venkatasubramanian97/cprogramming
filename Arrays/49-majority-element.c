/*Write a program in C to find the majority element of an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j, count, n, a = 0,b;
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
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
            if (a < count)
            {
                a = count;
                b=array[i];
            }
        }
    }
    n = size / 2;
    if (n < a)
    {
        printf("\nThe majority  of the element %d",b);
    }
    else
    {
        printf("\nThe no majority element in the given array");
    }
    return 0;
}
/*output:
Input the array of size : 9
Input 9 element the array :
element - 0 : 1
element - 1 : 3
element - 2 : 3
element - 3 : 7
element - 4 : 4
element - 5 : 3
element - 6 : 2
element - 7 : 3
element - 8 : 3
The given array is : 1 3 3 7 4 3 2 3 3 
The majority  of the element 3
*/