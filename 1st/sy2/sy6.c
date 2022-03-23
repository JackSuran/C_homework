#include<stdio.h>

int func(int n)
{
    if(n<2)    
        return 1;
    
    else
        return func(n-1)+func(n-2);
}

int main()
{
    int n = 8;
    scanf("%d",&n);

    printf("result=%d",func(n));

    return 0;
}