/*Write a C program to read any day number in integer and display the day name in word format*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Not a days");
    }
    return 0;
}
/*output:
Enter the number : 4
Thursday*/