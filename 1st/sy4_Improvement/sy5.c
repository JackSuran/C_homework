#include<stdio.h>
#include<math.h>

double fact(int n)
{
    int i;
    double sum=1.;
    for(i=1;i<=n;i++)
    {
        sum = sum*i;
    }
    return sum;
}

int main()
{
    int i=0;
    double x,sum=0.,cur=1.; //传入参数x 展开式的和 正在计算的项
    scanf("%lf",&x);

    for(i=1;fabs(cur)>=0.00001;i++) 
    {
        cur = pow(x,i)/fact(i);
        sum += cur;
    }

    printf("s=%.2lf",sum);

    return 0;
}