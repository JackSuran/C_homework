#include<stdio.h>

int main()

{
    int year,month,day,days,i,d=0;

    scanf("%d%d%d",&year,&month,&day);

    days=0;

    for(i=1;i<month;i++)
    {     
        switch(i)
        {    
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:d=31;break;

        case 4:case 6:case 9:case 11:d=30;break;

        case 2:
            {
                if((year%4==0 && year%100!=0) || year%400==0) 
                    d=29;
                else
                    d=28;
            }
        }
        days += d;
    }

    printf("%d\n",days+day);

    return 0;
}