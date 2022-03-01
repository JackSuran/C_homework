#include<stdio.h>

int main()
{
    int i, j, sum, n;  
    scanf("%d", &n);
    for( i=2; i<=n; i++ )
    {
        sum=0;
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)
                sum += j;
        }
        if(sum == i)
            printf("%d\n",i);
    }
    return 0;
}