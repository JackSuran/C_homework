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
    int begin,end,i,count=0;
    scanf("[%d,%d]",&begin,&end);

    for(i = begin;i<=end;i++)
    {
        if(isLeap(&i))
        {
            count++;
        }
    }
    printf("years=%d",count);
    return 0;
}