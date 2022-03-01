#include<stdio.h>

int peachNum(int n)
{
    if(n==1)
        return 1;
    return peachNum(n-1)*2+2;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Totals=%d",peachNum(n));

    return 0;
}