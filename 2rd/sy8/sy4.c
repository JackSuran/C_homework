#include <stdio.h>

int isPrime(int num)
{
    int i, flag = 0;

    if(num < 2)
    {
        return flag;
    }
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return flag;
        }
    }

    flag = 1;
    return flag;
}

int main()
{
    int upLine, downLine, count = 0, sum = 0;
    int i;

    scanf("%d,%d", &downLine, &upLine);

    for (i = downLine; i <= upLine; i++)
    {
        if (isPrime(i))
        {
            count++;
            sum += i;
        }
    }

    printf("count=%d,sum=%d", count, sum);

    return 0;
}