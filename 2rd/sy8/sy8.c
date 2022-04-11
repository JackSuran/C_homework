#include <stdio.h>
#include <stdlib.h>

int isleap(int *year)
{
    if ((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0)
        return 1;
    return 0;
}

int IsDate(int *year, int *month, int *day)
{
    if (*year < 1)
        return 0;
    else if (*month > 12 || *month < 1 || *day > 31 || *day < 1)
        return 0;
    else if (*month == 2)
    {
        if (isleap(year) && *day > 29)
            return 0;
        else if (!isleap(year) && *day > 28)
            return 0;
    }
    else if ((*month == 4 || *month == 6 || *month == 9 || *month == 11) && *day > 30)
        return 0;

    else
        return 1;
}

int Days(int *year, int *month, int *day)
{
    int days = 0;

    if (!IsDate(year, month, day))
    {
        printf("DateError");
        exit(0);
    }

    switch (*month)
    {
    case 12:
        days += 30;
    case 11:
        days += 31;
    case 10:
        days += 30;
    case 9:
        days += 31;
    case 8:
        days += 31;
    case 7:
        days += 30;
    case 6:
        days += 31;
    case 5:
        days += 30;
    case 4:
        days += 31;
    case 3:
        if (isleap(year))
            days += 29;
        else days += 28;
    case 2:
        days += 31;

    default:
        break;
    }
    days += *day;

    return days;
}

int main()
{
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);

    printf("NO:%d", Days(&year, &month, &day));

    return 0;
}