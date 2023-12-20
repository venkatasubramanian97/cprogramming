/*Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days*/
#include <stdio.h>
int main()
{
    int day, year, month, days;
    printf("Number of days : ");
    scanf("%d", &day);
    year = day / 365;
    printf("%d Year(s)\n", year);
    year = day % 365;
    month = year / 30;
    printf("%d Month(s)\n", month);
    days = year % 7;
    printf("%d Day(s)\n", days);
    return 0;
}
/*output:
Number of days : 1329
3 Year(s)
7 Month(s)
3 Day(s)*/