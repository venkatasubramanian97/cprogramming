/*Write a program in C to merge two arrays of the same size sorted in descending order*/
#include <stdio.h>
int main()
{
    int size, size1;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array1[size + size], array2[size], i, j, des;
    for (i = 0; i < size; i++)
    {
        printf("elemrnt - %d : ", i);
        scanf("%d", &array1[i]);
    }
    printf("Input the number of elements to be stored in the second array : %d\n",size);
    //scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array2[i]);
    }
    size1 = size + size;
    array1[size1];
    for (i = 0; i < size; i++)
    {
        array1[i + size] = array2[i];
    }
    for (i = 0; i < size1; i++)
    {
        for (j = i + 1; j < size1; j++)
        {
            if (array1[i] < array1[j])
            {
                des = array1[i];
                array1[i] = array1[j];
                array1[j] = des;
            }
        }
    }
    printf("The merged array in decending order is :\n");
    for (i = 0; i < size1; i++)
    {
        printf("%d ", array1[i]);
    }
    return 0;
}
/*output:
nput the number of elements to be stored in the first array : 5
Input 5 element in the array :
elemrnt - 0 : 1
elemrnt - 1 : 3
elemrnt - 2 : 5
elemrnt - 3 : 6
elemrnt - 4 : 7
Input the number of elements to be stored in the second array : 5
Input 5 element in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 9
element - 3 : 7
element - 4 : 8
The merged array in decending order is :
9 8 7 7 6 5 3 2 1 1
*/