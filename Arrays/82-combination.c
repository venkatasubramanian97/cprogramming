/*Write a program in C to print all possible combinations of r elements in a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], number, i, j, k, l, sum = 0;
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
    printf("\n");
    printf("The combinations are :\n");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            for (k = j + 1; k < size; k++)
            {
                for (l = k + 1; l < size; l++)
                {
                    printf("%d %d %d %d\n",array[i],array[j],array[k],array[l]);
                }
            }
        }
    }
    return 0;
}
/*output:
Input the size of array : 5
Input 5 element of the array :
element - 0 : 1
element - 1 : 5
element - 2 : 4
element - 3 : 6
element - 4 : 8
The given array is : 1 5 4 6 8 
The combinations are :
1 5 4 6
1 5 4 8
1 5 6 8
1 4 6 8
5 4 6 8
*/