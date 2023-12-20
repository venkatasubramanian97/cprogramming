/*Write a C program to convert specified days into years, weeks and days*/
#include <stdio.h>
int main()
{
    int day, year, week, days;
    printf("Number of days : ");
    scanf("%d", &day);
    year = day / 365;
    printf("years : %d\n", year);
    year = day % 365;
    week = year / 7;
    printf("weeks : %d\n", week);
    days = year % 7;
    printf("days : %d\n", days);
    return 0;
}
/*output:
Number of days : 1329
years : 3
weeks : 33
days : 3*/