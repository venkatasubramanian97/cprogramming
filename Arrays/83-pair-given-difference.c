/*Write a program in C to find a pair with the given difference*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], number, i, j,first , sub=0;
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
    printf("\nThe given difference is : ");
    scanf("%d",&number);
    printf("The pair are : ");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            sub=array[i]-array[j];
            if(sub==number||sub==-number)
            {
                printf("(%d,%d) ",array[i],array[j]);
            }
            sub=0;
        }
    }
    return 0;
}
/*output:
Input the size of array : 5
Input 5 element of the array :
element - 0 : 1   
element - 1 : 15
element - 2 : 14
element - 3 : 39
element - 4 : 92
The given array is : 1 15 14 39 92 
The given difference is : 53
The pair are : (39,92)  
*/