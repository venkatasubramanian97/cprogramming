/*Write a program in C to merge one sorted array into another sorted array*/
#include<stdio.h>
int main()
{
    int size,size1,size2;
    printf("Input the first array of size : ");
    scanf("%d",&size);
    printf("Input the second arry of size : ");
    scanf("%d",&size1);
    int large[size],small[size1],merge[size+size1],i,j,sorted;
    printf("Input %d element of first array :\n",size);
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&large[i]);
    }
    printf("Input %d element of second array :\n",size1);
    for(i=0;i<size1;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&small[i]);
    }
    size2=size+size1;
    for(i=0;i<size;i++)
    {
        merge[i]=large[i];
    }
    for(i=0;i<size1;i++)
    {
        merge[i+size]=small[i];
    }
    printf("The given large array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",large[i]);
    }
    printf("\nThe given small array is : ");
    for(i=0;i<size1;i++)
    {
        printf("%d ",small[i]);
    }
    for(i=0;i<size2;i++)
    {
        for(j=i+1;j<size2;j++)
        {
            if(merge[i]>merge[j])
            {
                sorted=merge[i];
                merge[i]=merge[j];
                merge[j]=sorted;
            }
        }
    }
    printf("\nAfter merge the new array is :\n");
    for(i=0;i<size2;i++)
    {
        printf("%d ",merge[i]);
    }
    return 0;
}
/*output:
Input the first array of size : 3
Input the second arry of size : 4
Input 3 element of first array :
element - 0 : 10
element - 1 : 20
element - 2 : 30
Input 4 element of second array :
element - 0 : 15
element - 1 : 25
element - 2 : 35
element - 3 : 40
The given large array is : 10 20 30    
The given small array is : 15 25 35 40 
After merge the new array is :
10 15 20 25 30 35 40
*/