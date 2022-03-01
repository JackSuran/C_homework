#include<stdio.h>

int main(){

    int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int year,month,day;

    int i;

    scanf("%d%d%d",&year,&month,&day);

    if(month<0||month>12)
        printf("date error");

    else{
        for(i=0;i<month;i++){
            day+=month_day[i];

        }
        if (month>1&&((year%4==0 && year%100 !=0) || year%400==0))
            day++;
    }       

    printf("%d",day);

    return 0;
}