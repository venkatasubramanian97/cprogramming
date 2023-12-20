/* Write a C program to skip the some statements in your program.*/
#include <stdio.h>
int main()
{
    int i = 1;
    printf("The number is : %d\n", i);
    i++;
    printf("The number is : %d\n", i);
    i++;
    printf("The number is : %d\n", i);
    i++;
    printf("The number is : %d\n", i);
    goto end;
    i++;
    printf("The number is : %d\n", i);
end:
    i = i + 2;
    printf("The number is : %d\n", i);
    goto start;
    i++;
    printf("The number is : %d\n", i);
start:
    i = i + 2;
    printf("The number is : %d\n", i);
    return 0;
}
/*output:
The number is : 1
The number is : 2
The number is : 3
The number is : 4
The number is : 6
The number is : 8*/