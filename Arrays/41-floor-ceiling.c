/*Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sroted array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of the size : ");
    scanf("%d", &size);
    int array[size], i, j, k;
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
    printf("\n");
    for (i = 0; i <= 10; i++)
    {
        printf("Number : %d ", i);
        for (j = 0; j < size; j++)
        {
            if (i <= array[j])
            {
                printf("Ceiling is : %d ", array[j]);
                break;
            }
            if (i > array[size - 1])
            {
                printf("Ceiling is : %d", -1);
                break;
            }
        }
        for (k = size-1; k >= 0; k--)
        {
            if (i >= array[k])
            {
                printf("Floor is : %d ", array[k]);
                break;
            }
            if (i < array[0])
            {
                printf("Floor is : %d", -1);
                break;
            }
        }
        
        printf("\n");
    }
    return 0;
}
/*output:
Input the array of the size : 5
Input 5 element of the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 9
The given array is : 2 4 6 8 9
Number : 0 Ceiling is : 2 Floor is : -1
Number : 1 Ceiling is : 2 Floor is : -1
Number : 2 Ceiling is : 2 Floor is : 2 
Number : 3 Ceiling is : 4 Floor is : 2 
Number : 4 Ceiling is : 4 Floor is : 4 
Number : 5 Ceiling is : 6 Floor is : 4 
Number : 6 Ceiling is : 6 Floor is : 6 
Number : 7 Ceiling is : 8 Floor is : 6 
Number : 8 Ceiling is : 8 Floor is : 8 
Number : 9 Ceiling is : 9 Floor is : 9
Number : 10 Ceiling is : -1Floor is : 9
*/