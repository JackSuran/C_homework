#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    if(num%7==0&&num%5==0)
    {
        printf("A");
    }
    else if(num%5==0&&num%7!=0)
    {
        printf("B");
    }
    else if(num%5!=0&&num%7==0)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }

    return 0;
}