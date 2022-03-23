#include<stdio.h>

int main()
{
    double x;
    scanf("%lf",&x);

    if(x<1) printf("y=%.2f",x);
    else if(x>=1&&x<10) printf("y=%.2f",x-1);
    else printf("y=%.2f",3*x-11);

    return 0;
}