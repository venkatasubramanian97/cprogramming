/*Write a program in C to return the maximum sum such that no two elements are adjacent*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, j,sum,adjacent,temp,a,b,c,d,add,e;
    e=size/2;
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
    sum=array[0];
    adjacent=0;
    for(i=1;i<size;i++)
    {
        temp=(sum>adjacent)?sum:adjacent;
        sum=adjacent+array[i];
        adjacent=temp;
    }
    for(i=0;i<size-e;i++)
    {
        a=array[i];
        b=array[i+2];
        c=array[i+3];
        for(j=e;j<size;j++)
        {
            add=0;
            d=array[j];
            add=a+b+c+d;
            if(sum==add)
            {
                printf("\n{%d,%d,%d,%d}",a,b,c,d);
                break;
            }
        }
    }
    printf("\nThe maximum sum from the array such that no two element are adjacent is : %d",sum);
}
/*output:
Input the array of size : 9
Input 9 element of the array :
element - 0 : 1
element - 1 : 3
element - 2 : 5
element - 3 : 9
element - 4 : 7
element - 5 : 10
element - 6 : 1
element - 7 : 10
element - 8 : 100
The given array is : 1 3 5 9 7 10 1 10 100 
The maximum sum from the array such that no two element are adjacent is : 122
*/