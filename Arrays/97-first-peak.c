/*Write a program in C to find the index of the first peak element in a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size],i;
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
    for(i=0;i<size-1;i++)
    {
        if(array[i]<array[i+1])
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("\nThe index of first peak element in the array is : %d",i);
    return 0;
}
/*output:
Input the array of size : 9
Input 9 element of the array :
element - 0 : 5
element - 1 : 12
element - 2 : 13
element - 3 : 20
element - 4 : 16
element - 5 : 19
element - 6 : 11
element - 7 : 7
element - 8 : 25
The given array is : 5 12 13 20 16 19 11 7 25      
The index of first peak element in the array is : 3
*/