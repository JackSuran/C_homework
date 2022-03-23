#include<stdio.h>

int main()
{
    int year,leap;
    leap = 0;
    scanf("%d",&year);

    if((year%4==0 && year%100 !=0) || year%400==0)
    {
        leap = 1;
    }
    
    if(leap)
    {
        printf("yes");
        return 0;
    }

    printf("no");

    return 0;
}