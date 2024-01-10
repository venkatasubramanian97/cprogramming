/*Write a program in C to find the majority element of an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j, sum, n, a = 0,b;
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
        sum = 1;
        for (j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                sum++;
            }
            if (a < sum)
            {
                a = sum;
                b=array[i];
            }
        }
    }
    n = size / 2;
    if (n < a)
    {
        printf("\nThere are majority element %d in the given array",b);
    }
    else
    {
        printf("\nThere are no majority element in the given array");
    }
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element the array :
element - 0 : 1
element - 1 : 2
element - 2 : 2
element - 3 : 2
element - 4 : 3
The given array is : 1 2 2 2 3 
There are majority element in the given array
*/