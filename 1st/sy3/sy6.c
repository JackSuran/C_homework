#include<stdio.h>

typedef int bool;
#define true 1
#define false 0;
int main()
{
    int year,month,day;
    bool isLeap,shortMonth,legitimate;
    isLeap = false;
    shortMonth = false;
    legitimate = false;

    scanf("%d %d %d",&year,&month,&day);

    if ((year%4==0 && year%100 !=0) || year%400==0)
    {
        isLeap = true;
    }
    if(month==4||month==6||month==9||month==11)
    {
        shortMonth = true;
    }

    if(day>0&&day<=31)
    {
        if(day==31&&shortMonth==1)
        {
            printf("no");
            return 0;
        }
        else if(month==2)
        {
           if(day>29)
           {
                printf("no");
                return 0;
           }
           else if(day==29&&isLeap==0)
           {
                printf("no");
                return 0;
           }
        }
        legitimate = true;

    }

    if(legitimate) printf("yes");
    else printf("no");

    return 0;
}