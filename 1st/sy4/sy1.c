#include<stdio.h>

int main()
{
    int x,y,z;

    for(x=0;x<20;x++)
    {
        y = 25-1.75*x;
        z = 100 - x - y;

        if((z==300-15*x-9*y)&&z%3==0&&y>0&&x>0)
        {
            printf("%5d%5d%5d\n",x,y,z);
        }
    }
    return 0;
}