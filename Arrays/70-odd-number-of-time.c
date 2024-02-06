/*Write a program in C to find two numbers that occur an odd number of times in an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], copy[size], m, n, count;
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
    printf("\nThe two number cccuring odd number of time are : ");
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
Input the size of array : 10
Input 10 element of the array 
element - 0 : 6
element - 1 : 7
element - 2 : 3
element - 3 : 6
element - 4 : 8
element - 5 : 7
element - 6 : 6
element - 7 : 8
element - 8 : 3
element - 9 : 3
The given array is : 6 7 3 6 8 7 6 8 3 3
The two number cccuring odd number of time are : 6 3
*