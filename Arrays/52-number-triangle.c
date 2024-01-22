/*Write a program in C to count the number of triangles that can be formed from a given array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    printf("Input %d element the array :\n", size);
    int array[size], i, j, angle_1, angle_2, angle_3,sum, count = 0;
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

    for (i = 0; i < size; i++)
    {
        sum=1;
        start:
        angle_1 = array[i];
        angle_2 = array[i + sum];
        for (j = i + sum+1; j < size; j++)
        {
            angle_3 = array[j];
            if ((angle_1 + angle_2) > angle_3)
            {
                if ((angle_1 + angle_3) > angle_2)
                {
                    if ((angle_2 + angle_3) > angle_1)
                    {
                        count++;
                    }
                }
            }
        }
        if(i+sum<size-1)
        {
            sum++;
            goto start;
        }
    }
    printf("\nNumber of possible triangle can be formed from the array is : %d", count);
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element the array :
element - 0 : 6
element - 1 : 18
element - 2 : 9
element - 3 : 7
element - 4 : 10
The given array is : 6 18 9 7 10
Number of possible triangle can be formed from the array is : 5
*/