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
    else
        return false;
}

int main()
{
    int year,month,day,dayNumber=366;
    scanf("%d %d %d",&year,&month,&day);

    switch (month)
    {
    case 1:
        dayNumber-=31;
    case 2:
        dayNumber-=29;
    case 3:
        dayNumber-=31;
    case 4:
        dayNumber-=30;
    case 5:
        dayNumber-=31;
    case 6:
        dayNumber-=30;
    case 7:
        dayNumber-=31;
    case 8:
        dayNumber-=31;
    case 9:
        dayNumber-=30;
    case 10:
        dayNumber-=31;
    case 11:
        dayNumber-=30;
    case 12:
        dayNumber-=31;
        break;
    default:
        printf("Input error!");
        break;
    }
    dayNumber+=day;
    if(!isLeap(&year))
    {
        dayNumber--;
    }
    printf("%d",dayNumber);

    return 0;
}