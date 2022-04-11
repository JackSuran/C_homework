#include <stdio.h>

int fib(int n)
{
    int i, target, front = 1, back = 1;
    if (n <= 2)
        return 1;

    for (i = 3; i <= n; i++)
    {
        target = front + back;
        back = front;
        front = target;
    }
    return target;
}

int main()
{
    int m, n, sum = 0;
    scanf("%d,%d", &m, &n);

    while (m <= n)
    {
        sum += fib(m);
        m++;
    }

    printf("sum=%d", sum);

    return 0;
}