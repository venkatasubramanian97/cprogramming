/*Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    (age >= 18) ? printf("Congratulation! You are eligible for casting your vote") : printf("Congratulation! You are not eligible for casting your vote");
    return 0;
}
/*output:
Enter the age : 23
Congratulation! You are eligible for casting your vote*/