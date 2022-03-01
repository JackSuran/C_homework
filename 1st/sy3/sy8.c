#include<stdio.h>

typedef int bool;
#define true 1
#define false 0

bool isLeap(int *year)
{
    if((*year%4==0&&*year%100!=0)||*year%400==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int year,month,day,dayNumber=0;
    scanf("%d %d %d",&year,&month,&day);

    switch (month-1)
    {
    case 11:
        dayNumber+=30;
    case 10:
        dayNumber+=31;
    case 9:
        dayNumber+=30;
    case 8:
        dayNumber+=31;
    case 7:
        dayNumber+=31;
    case 6:
        dayNumber+=30;
    case 5:
        dayNumber+=31;
    case 4:
        dayNumber+=30;
    case 3:
        dayNumber+=31;
    case 2:
        {
            if(isLeap(&year))
            {
                dayNumber+=29;
            }
            else
            {
                dayNumber+=28;
            }
        }
    case 1:
        dayNumber+=31;

    default:
        break;
    }
    dayNumber+=day;
    printf("%d",dayNumber);

    return 0;
}