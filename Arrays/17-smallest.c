/*Write a program in C to find the second smallest element in an array*/
#include<stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d",&size);
    printf("Input %d element in the array :\n",size);
    int array[size],i,first,second,k;
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    if(array[0]<array[1])
    {
        first=array[0];
        second=array[1];
    }
    else
    {
        first=array[1];
        second=array[0];
    }
    for(i=2;i<size;i++)
    {
        if(array[i]<second)
        {
            second=array[i];
        }
        if(second<first)
        {
            k=first;
            first=second;
            second=k;
        }
    }
    printf("The second smallest element in the array is : %d",second);
    return 0;
}
/*output:
Input the size of array : 5 
Input 5 element in the array :
element - 0 : 45
element - 1 : 21
element - 2 : 52
element - 3 : 60
element - 4 : 46
The second smallest element in the array is : 45
*/