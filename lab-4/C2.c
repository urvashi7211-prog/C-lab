//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]
#include <stdio.h>
int main() {
    int totalDays;
    int years, weeks, days;

    printf("Enter number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;

    printf("%d year, %d week and %d day", years, weeks, days);

    return 0;
}