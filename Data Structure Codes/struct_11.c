#include <stdio.h>
struct dates
{
    int day;
    int month;
    int year;
} st_date[2];

int main()
{
    printf("Enter the date of user one\n");
    scanf("%d%d%d", &st_date[0].day, &st_date[0].month, &st_date[0].year);
    printf("Enter the date of user two\n");
    scanf("%d%d%d", &st_date[1].day, &st_date[1].month, &st_date[1].year);
    if (st_date[0].year == st_date[1].year && st_date[0].month == st_date[1].month && st_date[0].day == st_date[1].day)
        printf("Dates  are same");
    else
        printf("Dates are not same");

    return 0;
}