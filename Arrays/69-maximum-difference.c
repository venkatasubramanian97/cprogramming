/*Write a program in C to find the maximum difference between any two elements such that the larger element appears after the smaller number*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, j,larger=0,smaller,max_dif;
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
    for(i=0;i<size;i++)
    {
        if(larger<array[i])
        {
            larger=array[i];
        }
    }
    smaller=larger;
    for(i=0;i<size;i++)
    {
        if(smaller>array[i])
        {
            smaller=array[i];
        }
        if(larger==array[i])
        {
            break;
        }
    }
    printf("\nThe element which provide maximum difference is : %d, %d",smaller,larger);
    max_dif=larger-smaller;
    printf("\nThe maximum differance between two element in the array is : %d",max_dif);
    return 0;
}
/*output:
Input the array of size : 6
Input 6 element of the array :
element - 0 : 7
element - 1 : 9
element - 2 : 5
element - 3 : 6
element - 4 : 13
element - 5 : 2
The given array is : 7 9 5 6 13 2 
The element which provide maximum difference is : 5, 13       
The maximum differance between two element in the array is : 8
*/