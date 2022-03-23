#include<stdio.h>

int main()
{
    double x,y;
    scanf("%lf",&x);
 
    if(x<=100)
    {
        y = x*0.51;
    }
    else
    {
	    y = x*0.65;
    }

    printf("%.2lf",y);

    return 0;
}