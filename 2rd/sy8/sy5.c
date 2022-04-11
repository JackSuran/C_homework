#include <stdio.h>

int isPrime(int num)
{
    int i, flag = 0;

    if (num < 2)
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
    int n, i, j, cur;

    scanf("%d", &n);

    i = n;
    while (i <= n + 10)
    {
        if (i % 2 != 0)
        {
            i++;
            continue;
        }

        for (j = 2; j <= i / 2; j++)
        {
            if (isPrime(j))
            {
                cur = i - j;
                if (isPrime(cur))
                {
                    printf("%d=%d+%d\n", i, j, cur);
                    break;
                }
            }
        }

        i += 2;
    }

    return 0;
}