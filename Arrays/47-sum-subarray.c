/*Write a program in C to find a subarray with a given sum from the given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of the size : ");
    scanf("%d", &size);
    int array[size], i, j, k, a, sum;
    printf("Input %d element of the array :\n", size);
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
    printf("\nInput the sum of the value : ");
    scanf("%d", &sum);
    for (i = 0; i < size; i++)
    {
        a = array[i];
        for (j = i + 1; j < size; j++)
        {
            a = a + array[j];
            if (a == sum)
            {
                printf("[%d...%d]", i, j);
                printf("----{");
                for (k = i; k <= j; k++)
                {
                    printf("%d ", array[k]);
                }
                printf("}");
                printf("\n");
            }
        }
    }
    return 0;
}
/*output:
Input the array of the size : 8
Input 8 element of the array :
element - 0 : 3
element - 1 : 4
element - 2 : -7
element - 3 : 1
element - 4 : 3
element - 5 : 3
element - 6 : 1
element - 7 : -4
The given array is : 3 4 -7 1 3 3 1 -4 
Input the sum of the value : 7
[0...1]----{3 4 }
[0...5]----{3 4 -7 1 3 3 }
[3...5]----{1 3 3 }       
[4...6]----{3 3 1 }       
*/