#include<stdio.h>
#include<math.h>

int main()
{
    int n,m;
    int i,j,k,count=0;
    scanf("%d,%d",&n,&m);
    int arr[n];
    for(i = 1;i<n;i++)
    {
        k=(int)sqrt((double)n);
        for(j=2;j<=k;j++)
            if(i%j==0)
                break;

        if(j>k)
        {
            arr[count] = i;
            count++;
        }
    }

    for(i = 0;i<m;i++)
    {
        printf("%d\n",arr[count-1-i]);
    }

    return 0;
}