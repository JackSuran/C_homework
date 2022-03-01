#include<stdio.h>

int main()
{
    int n,num1,num2,count,flag=0;
    scanf("%d",&n);
    for(count=0;count<4;n++){
        flag = 0;
        for(num1=n;num1>0;num1--){
            if(flag==1) break;
            for(num2=num1-1;num2>0;num2--){
                if(num1*num1+num2*num2==n*n){
                    count++;
                    printf("NO%d:%d\n",count,n);
                    flag = 1;
                    break;
                }
            }
        }
    }

    return 0;
}