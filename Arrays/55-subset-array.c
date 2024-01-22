/*Write a program in C to check whether an array is a subset of another array*/
#include <stdio.h>
int main()
{
    int size,length;
    printf("Input the size and length array of size : ");
    scanf("%d%d", &size,&length);
    int first[size],second[length], i, j, count=0;
    printf("Input %d element the first array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &first[i]);
    }
    printf("Input %d element the second array :\n", length);
    for (i = 0; i < length; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &second[i]);
    }
    printf("The given the first array : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",first[i]);
    }
    printf("\nThe given the second array : ");
    for(i=0;i<length;i++)
    {
        printf("%d ",second[i]);
    }
    if(size>length)
    {
        for(i=0;i<length;i++)
        {
            for(j=0;j<size;j++)
            {
                if(second[i]==first[j])
                {
                    count++;
                }
                if(second[i]==first[j]&&first[j]>0)
                {
                    first[j]=-1;
                    break;
                }
            }
        }
        if(size==count||length==count)
        {
        printf("\nThe second array is the subset of first array");
        }
        else
        {
          printf("\nThe second array is the not subset of first array");  
        }
    }
    else
    {
        for(i=0;i<size;i++)
        {
            for(j=0;j<length;j++)
            {
                if(first[i]==second[j])
                {
                    count++;
                }
                if(first[i]==second[j]&&second[j]>0)
                {
                    second[j]=-1;
                    break;
                }
            }
        }
        if(size==count||length==count)
        {
           printf("\nThe first array is the subset of second array"); 
        }
        else
        {
          printf("\nThe first array is the not subset of second array");  
        }
    }
    return 0;
}
/*output:
Input the size and length array of size : 9 5
Input 9 element the first array :
element - 0 : 4
element - 1 : 8
element - 2 : 7
element - 3 : 11
element - 4 : 6
element - 5 : 9
element - 6 : 5 
element - 7 : 0
element - 8 : 2
Input 5 element the second array :
element - 0 : 5
element - 1 : 4
element - 2 : 2
element - 3 : 0
element - 4 : 6
The given the first array : 4 8 7 11 6 9 5 0 2 
The given the second array : 5 4 2 0 6
The second array is the subset of first array  
*/