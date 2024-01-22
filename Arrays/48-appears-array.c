/*Write a program in C to find out if a given integer x appears more than n/2 times in a sorted array of n integers*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j,count,n,value,copy[size];
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        copy[i]=array[i];
    }
    printf("The given array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nThe given value is : ");
    scanf("%d",&value);
    n=size/2;
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
                copy[j]=0;
            }
        }
        if(array[i]==copy[i])
        {
            array[i]=count;
            if(copy[i]==value)
            {
                if(n<array[i])
                {
                    printf("%d appears more than %d times in the given array[]",value,n);
                }
                else
                {
                    printf("%d appears less than %d times in the given array[]",value,n);
                }
            }
        }
    }
    return 0;
}
/*output:
Input the array of size : 9
Input 9 element the array :
element - 0 : 1
element - 1 : 3
element - 2 : 3
element - 3 : 5
element - 4 : 4
element - 5 : 3
element - 6 : 2
element - 7 : 3
element - 8 : 3
The given array is : 1 3 3 5 4 3 2 3 3
The given value is : 3
3 appears more than 4 times in the given array[]
*/