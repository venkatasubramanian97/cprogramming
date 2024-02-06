/*Write a program in C to count the number of inversions in a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, j,inversion=0;
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
    printf("\nThe inversions are :\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                printf("(%d,%d) ",array[i],array[j]);
                inversion++;
            }
        }
    }
    printf("\nThe number of inversion can be formed from the array is : %d",inversion);
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element of the array :
element - 0 : 1
element - 1 : 9
element - 2 : 6
element - 3 : 4
element - 4 : 5
The given array is : 1 9 6 4 5 
The inversions are :
(9,6) (9,4) (9,5) (6,4) (6,5) 
The number of inversion can be formed from the array is : 5
*/