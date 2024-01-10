/*Write a program in C to find the number occurring odd number of times in an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], copy[size], m, n, count, a;
    for (m = 0; m < size; m++)
    {
        printf("element - %d : ", m);
        scanf("%d", &array[m]);
        copy[m] = array[m];
    }
    printf("The given array is : ");
    for (m = 0; m < size; m++)
    {
        printf("%d ", array[m]);
    }
    printf("\nThe element odd number of time is : ");
    for (m = 0; m < size; m++)
    {
        count = 1;
        for (n = m + 1; n < size; n++)
        {
            if (array[m] == array[n])
            {
                count++;
                copy[n] = 0;
            }
        }
        if (array[m] == copy[m])
        {
            array[m] = count;

            if (array[m] % 2 != 0)
            {
                printf("%d ", copy[m]);
            }
        }
    }
    return 0;
}
/*output:
Input the size of array : 9
Input 9 element of the array :
element - 0 : 1
element - 1 : 1
element - 2 : 1
element - 3 : 1
element - 4 : 1
element - 5 : 5
element - 6 : 6
element - 7 : 6
element - 8 : 6
The given array is : 1 1 1 1 1 5 6 6 6    
The element odd number of time is : 1 5 6 
*/