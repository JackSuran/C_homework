#include<stdio.h>

int main()
{
    int i,j,n;
  
    while(1)
    {
	    scanf("%d",&n);
	    if(n<=14&&n>0)
        {
            for(i=0;i<=n;i++)
            {
                for(j=0;j<14-i;j++)
                {
                    printf(" ");
                }
                for(j=0;j<2*i-1;j++)
                {
	                printf("*");
                }
	            printf("\n");
            }
	        break;
        }
	}

    return 0;
}