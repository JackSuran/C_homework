#include <stdio.h>
#include <math.h>

int getN(int number)
{
    if (!(number / 10))
        return 1;
    else if (!(number / 100))
        return 2;
    else if (!(number / 1000))
        return 3;
    else
        return 4;
}

int is(int number)
{
    int temp, cur, n = getN(number), sum = 0;

    temp = number;
    while (temp)
    {
        cur = temp % 10;
        temp /= 10;
        sum += pow(cur, n);
    }

    if (sum == number)
        return 1;

    return 0;
}

int main()
{
    int m, n;
    printf("Input m and n: ");
    scanf("%d %d", &m, &n);

    while (m <= n)
    {
        if (is(m))
            printf("%d\n", m);
        m++;
    }

    return 0;
}