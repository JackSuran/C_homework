#include<stdio.h>

int main()
{
    int month;
    scanf("%d",&month);

    if(month>=2&&month<=4)    
        printf("Spring");

    else if(month>=5&&month<=7)
        printf("Summer");
    else if(month>=8&&month<=10)
        printf("Autumn");
    else if(month==11||month==12||month==1)
        printf("Winter");
    else
        printf("Error");

    return 0;
}