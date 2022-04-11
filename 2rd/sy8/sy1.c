#include <stdio.h>
#include<math.h>

double fun(int a, int n)
{
    int i, j;
    double sum = 0, cur = 0;

    for (i = 0; i < n; i++)
    {
        cur = 0;
        for (j = n - i; j > 0; j--)
        {
            cur += a * pow(10,j-1);
        }
        sum += cur;
    }
    return sum;
}

int main(){
    int a, n;
    scanf("%d %d",&a,&n);

    printf("s=%.0lf",fun(a,n));

    return 0;
}