#include<stdio.h>

int main(){
    int n,i;
    double max,min;
    scanf("%d",&n);
    double arr[n];

    for(i = 0;i < n;i++){
        scanf("%lf",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 0;i < n;i++){
        if(arr[i]>=max)
            max = arr[i];
        if(arr[i]<=min)
            min = arr[i];
    }

    printf("%.2lf",max-min);

    return 0;
}