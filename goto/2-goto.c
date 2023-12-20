/* Check whether given number is even or odd until this program run to click exit, using goto statement.*/
#include <stdio.h>
int main()
{
    int a, n;
end:
start:
    printf("Enter the number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("Entered number %d is even", a);
    else
        printf("Entered number %d is odd", a);
    printf("\nEixt to click 1,or Run again to click any number : ");
    scanf("%d", &n);
    if (n > 1)
        goto end;
    if (n < 1)
        goto start;
    printf("Program terminated succesfully");

    return 0;
}
/*output:
Enter the number : 45
Entered number 45 is odd
Eixt to click 1,or Run again to click any number : 8
Enter the number : 82
Entered number 82 is even
Eixt to click 1,or Run again to click any number : -6
Enter the number : 23
Entered number 23 is odd
Eixt to click 1,or Run again to click any number : 1
Program terminated succesfully*/