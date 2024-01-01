/*Write a program in C to find the LCM of any two numbers*/
#include <stdio.h>
int main()
{
    int num1, num2, i, init, update;
    printf("Enter two positive integer number : ");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        init = num1;
        update = num1;
    }
    else
    {
        init = num2;
        update = num2;
    }
    for (i = init; 1000 > init; init += update)
    {
        if (init % num1 == 0 && init % num2 == 0)
        {
            printf("LCM is : %d", init);
            break;
        }
    }
    return 0;
}
/*output:
Enter two positive integer number : 15
25
LCM is : 75
*/