/*Write a program in C to count the frequency of each element of an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Input %d element in the array :\n", size);
    int array[size], i, c, j, arr[size];
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        arr[i] = -1;
    }
    for (i = 0; i < size; i++)
    {
        c = 1;
        for (j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                c++;
                arr[j] = 0;
            }
        }
        if (arr[i] != 0)
        {
            arr[i] = c;
        }
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d occurs %d time\n", array[i], arr[i]);
        }
    }
    return 0;
}
/*output:
Input the number of elements to be stored in the array : 4
Input 4 element in the array :
element - 0 : 10
element - 1 : 20
element - 2 : 30
element - 3 : 30
10 occurs 1 time
20 occurs 1 time
30 occurs 2 time
*/