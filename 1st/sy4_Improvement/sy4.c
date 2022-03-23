#include<stdio.h>

int main()
{
    int num1,num2,a,b;
    int gys,gbs;
    scanf("%d,%d",&num1,&num2);
    a = num1;
    b = num2;
    while(1)
    {
        if(a>b)
            a-= b;
        else if(a<b)
            b -= a;
        else if(a==b)
        {
            gys = a;
            break;
        }
    }

    gbs=(num1*num2)/gys;

    printf("gys=%d,gbs=%d",gys,gbs);

    return 0;
}