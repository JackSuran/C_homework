#include<stdio.h>

int main()
{
    double R1,R2,R;
    scanf("%lf %lf",&R1,&R2);

    R = (R1*R2)/(R1+R2);
    printf("%.2lf",R);

    return 0;
}