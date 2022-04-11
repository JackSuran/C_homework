#include <stdio.h>

int Sum(int start, int count)
{
    int sum = 0;

    while (count)
    {
        sum += start++;
        count--;
    }

    return sum;
}

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += Sum(i, i + 1);
    }
    printf("sum=%d", sum);

    return 0;
}