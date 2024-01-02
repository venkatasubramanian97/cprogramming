/*Write a program in C to convert an octal number into binary*/
#include <stdio.h>
int main()
{
    int number,value,remainder;
    printf("Enter a octal number(using digit 0-7) : ");
    scanf("%d", &number);
    printf("The equivalent binary number : ");
    value = number;
    while (value > 0)
    {
        remainder = value / 10000;
        switch (remainder)
        {
        case 0:
            printf("%d%d%d",0,0,0);
            break;
        case 1:
            printf("%d%d%d",0,0,1);
            break;
        case 2:
            printf("%d%d",0,10);
            break;
        case 3:
            printf("%d%d",0, 11);
            break;
        case 4:
            printf("%d", 100);
            break;
        case 5:
            printf("%d", 101);
            break;
        case 6:
            printf("%d", 110);
            break;
        case 7:
            printf("%d", 111);
            break;
        }
        value = value % 10000;
        value = value * 10;
    }
    return 0;
}
/*output:
Enter a octal number(using digit 0-7) : 675
The equivalent binary number : 00110111101
*/