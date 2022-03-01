#include<stdio.h>

int main()
{
    int cent5,cent2,cent1,change,count=0;
    scanf("%d",&change);

    if(change<8) {printf("count=0");return 0;}
    for(cent5=(change/5);cent5>0;cent5--)
    {
        for(cent2=(change/2);cent2>0;cent2--)
        {
            cent1=change-5*cent5-2*cent2;
            if(5*cent5+2*cent2+cent1==change&&cent1>0)
            {
                count++;
            }
        }
    }

    printf("count=%d",count);
    return 0;
}