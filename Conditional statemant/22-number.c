/*Write a program in C to read any digit and display it in the word*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    switch (a)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eieght");
        break;
    case 9:
        printf("Nine");
        break;
    case 10:
        printf("ten");
        break;
    default:
        printf("Not a number");
    }
    return 0;
}
/*output:
Enter the number : 7
Seven*/