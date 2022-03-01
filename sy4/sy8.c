#include<stdio.h>
#include<math.h>

typedef int bool;
#define true 1
#define false 0

bool isPrime (int n)
{
    int i;
    for(i=2;i<=(int)sqrt((int)n);i++)
        if(n%i==0)
            return false;
    if(i>(int)sqrt((int)n))
        return true;
}

int main()
{
    int i,j,cur;
    for(i = 6;i<=30;i+=2)
    {
        for(j = 3;j<=i/2;j++)
        {
            if(isPrime(j))
            {
                cur = i - j;
                if(isPrime(cur))
                    printf("%d=%d+%d\n",i,j,cur);
            }
        }
    }
    return 0;
}