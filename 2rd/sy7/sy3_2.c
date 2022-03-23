#include <stdio.h>
#define M 6

int main()
{
    int i, j, n, max, min;
    scanf("%d", &n);
    int arr[M][M], a1[M], a2[M];

    // 储存二维数组, 读取第i行的最大值
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > max){
                a1[i] = i * 10 + j;
                max = arr[i][j];
            }
        }
    }

    // 读取第j列的最小值
    for (i = 0; i < n; i++)
    {
        min = 999;
        for (j = 0; j < n; j++)
        {
            if (arr[j][i] < min){
                a2[i] = j * 10 + i;
                min = arr[j][i];
            }
        }
    }

    // 比较两个数组的值, 输出数据
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a1[i] == a2[j])
            {
                printf("a(%d,%d)=%d", i, j, arr[i][j]);
                return 0;
            }
        }
    }
    printf("NO");

    return 0;
}