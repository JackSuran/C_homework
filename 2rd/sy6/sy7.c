#include <stdio.h>

int main()
{
    int a[100], n, k, i, j; // 数组数据量n 向右移动k个位置

    int tmp;

    scanf("%d", &k);

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    k = k%8;

    i = 0;
    j = n - k - 1;
    while (i < j)
    {
        tmp = a[j];
        a[j--] = a[i];
        a[i++] = tmp;
    }

    i = n - k;
    j = n - 1;
    while (i < j)
    {
        tmp = a[j];
        a[j--] = a[i];
        a[i++] = tmp;
    }

    i = 0;
    j = n - 1;
    while (i < j)
    {
        tmp = a[j];
        a[j--] = a[i];
        a[i++] = tmp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}