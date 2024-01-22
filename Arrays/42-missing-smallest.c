/*Write a program in C to find the smallest missing element in a sorted array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of the size : ");
    scanf("%d", &size);
    int array[size], i, count,a=0;
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
    count=array[0];
    printf("\nThe missing smallest element is : ");
    start:
    for(i=a;i<size;i++)
    {
        if(count==array[i])
        {
            count++;
            a++;
            goto start;
        }
        printf("%d",count);
        break;
    }
    return 0;
}
/*output:
Input the array of the size : 5
Input 5 element of the array :
element - 0 : -1
element - 1 : 0
element - 2 : 1
element - 3 : 3
element - 4 : 5
The given array is : -1 0 1 3 5    
The missing smallest element is : 2
*/