#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,sum,temp,cur;
    scanf("%d",&n);

    for(i = pow(10,n-1);i < pow(10,n);i++)
    {
        sum = 0;
        temp = i;
        while(temp!=0)
        {
            cur = temp % 10;
            if(n==7)
            {
                sum += cur*cur*cur*cur*cur*cur*cur;
                temp = temp / 10;
                continue;
            }
            sum += pow(cur,n);
            temp = temp / 10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}