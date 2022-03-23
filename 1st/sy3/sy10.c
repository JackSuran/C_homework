#include <stdio.h>

int main(void){

    int year,month,day,Feb,sum = 0;

    scanf("%d%d%d",&year,&month,&day);

    if ( (day>31) || (day<1) ){

        printf("input error! ");

        return 0;

    }

    if((year%4==0 && year%100!=0)||(year%400==0)){
        Feb=29;
    }

    else{
        Feb=28;
    }

      

    switch(month)
    { 
    case 1: sum = day ; break;
    case 2: 
        if (day>Feb)
        {
            printf("input error\n ");

            return 0;
        }
        else 
        {
            sum = 31 + day ; break;
        }

    case 3: sum = 31 + Feb +day ; break;

    case 4: sum = 62 + Feb +day ; break;

    case 5: sum = 92 + Feb +day ; break;

    case 6: sum = 123 + Feb +day ; break;

    case 7: sum = 153 + Feb +day ; break;

    case 8: sum = 184 + Feb +day ;break;

    case 9: sum = 215 + Feb +day ; break;

    case 10: sum = 245+Feb+day;break;

    case 11: sum = 276+Feb+day; break;

    case 12: sum = 306+Feb+day; break;

    default: 
        printf("input error\n ") ;            

    }

    printf("%d", sum);

    return 0;

}