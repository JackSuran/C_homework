#include<stdio.h>
#include<math.h>

int main()
{
    int i,a,n,cur,num=0,sum=0;
    scanf("%d,%d",&a,&n);
    for(i = 0;i<n-1;i++)
    {
        cur = a*(int)pow(10,i);
        num += cur;
        sum += num;
        printf("%d+",num);
    }
    cur = a*(int)pow(10,n-1);
    num += cur;
    sum += num;
    printf("%d=%d",num,sum);

    return 0;
}