/*Write a program in C to find the two repeating elements in a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], copy[size], m, n, count, a=2,b=0;
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
    printf("\nThe repeating element are : ");
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

            if (array[m] / 2 != 0)
            {
                b++;
                if(a>=b)
                {
                printf("%d ", copy[m]);
                }
            }
        }
    }
    return 0;
}
/*output:
Input the size of array : 8
Input 8 element of the array :
element - 0 : 1
element - 1 : 2
element - 2 : 4
element - 3 : 3
element - 4 : 3
element - 5 : 2
element - 6 : 2
element - 7 : 4
The given array is : 1 2 4 3 3 2 2 4 
The repeating element are : 2 4
*/