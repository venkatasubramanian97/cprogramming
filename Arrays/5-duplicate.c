/*Write a program in C to count the total number of duplicate elements in an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n",size);
    int array[size] ,i, j,c=0;
    for (i = 0; i < size; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Total number of duplicate elements found in the array :\n");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
		c++;
        	break;
            }

        }
    }
    printf("%d",c);
    return 0;
}
/*output:
Input the number of elements to be stored in the array : 8
Input 8 element in the array :
Element - 0 : 1
Element - 1 : 1
Element - 2 : 1
Element - 3 : 2
Element - 4 : 2
Element - 5 : 2
Element - 6 : 3
Element - 7 : 1
Total number of duplicate elements found in the array :
5
*/