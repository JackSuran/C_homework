#include<stdio.h>

int main()
{
    int i,j;
    for(i=0;i<13;i++)
    {
        if(i<7)
        {
            for(j=0;j<29-i;j++)
            {
                printf(" ");
            }
            for(j=0;j<2*i+1;j++)
            {
                printf("%d",i+1);
            }
        }
        else if(i>=7)//第八行开始
        {
            for(j=0;j<17+i;j++)
            {
                printf(" ");
            }
            for(j=0;j<25-2*i;j++)
            {
                printf("%d",i-(2*i-13));
            }
        }
        printf("\n");
    }
    return 0;
}