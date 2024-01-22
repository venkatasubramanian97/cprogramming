#include <stdio.h>
int maxi(int[], int);
int count(int[], int, int);
int ascending(int[], int);
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    maxi(array, size);
}
int maxi(int array[], int size)
{
    int maximum;
    maximum = array[0];
    for (int i = 1; i < size; i++)
    {
        if (maximum < array[i])
        {
            maximum = array[i];
        }
    }
    maximum = maximum + 1;
    count(array, maximum, size);
}
int count(int array[], int maximum, int size)
{
    int subarray[maximum], i, j, temp, sorted[size];
    for (i = 0; i < maximum; i++)
    {
        subarray[i] = 0;
    }
    for (j = 0; j < size; j++)
    {
        subarray[array[j]] = subarray[array[j]] + 1;
    }
    for (i = 1; i < maximum; i++)
    {
        subarray[i] = subarray[i] + subarray[i - 1];
    }
    for (j = 0; j < size; j++)
    {
        temp = array[j];
        sorted[subarray[temp] - 1] = temp;
        subarray[temp] = subarray[temp] - 1;
    }
    ascending(sorted, size);
}
int ascending(int sorted[], int size)
{
    printf("\nAfter sorting the element in the array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sorted[i]);
    }
}
/*output:
Input the array of size : 13
4 14 8 0 2 5 2 1 0 17 9 0 5 
The given array is : 4 14 8 0 2 5 2 1 0 17 9 0 5
After sorting the element in the array are : 0 0 0 1 2 2 4 5 5 8 9 14 17 
*/