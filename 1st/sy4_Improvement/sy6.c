#include<stdio.h>

int main()
{
    int n;
    double up,down,temp,sum=0.;
    scanf("%d",&n);
    up = 2.;
    down = 1.;
    
    while(n--)
    {
        sum += up/down;
        temp = up;
        up = up+down;
        down = temp;
    }
    printf("s=%.2lf",sum);

    return 0;
}