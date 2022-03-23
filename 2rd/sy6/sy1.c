#include<stdio.h>

int main(){
    int n,i,x,target=-1,minCount=0,maxCount=0;

    //输入数据
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(arr[i]==x)
            target = i;
        if(arr[i]>x)
            maxCount++;
        else if(arr[i]<x)
            minCount++;
    }

    printf("%d\n%d\n%d",target,maxCount,minCount);
    
    return 0;
}