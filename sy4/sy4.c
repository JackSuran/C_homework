#include<stdio.h>

int main()
{
    int isChange = 0;
    int i,index=0,sum=0;
    for(i=1;i<201;i++)
    {
        if(i%2==0&&(i%7==0||i%17==0))
        {
            printf("%6d",i);
            sum+=i;
            index++;
            isChange = 1;
        }
        if(index%5==0&&index>0&&isChange)
        {
            printf("\n");
            isChange = 0;
        }
        
    }
    printf("\nsum=%d",sum);
    return 0;
}