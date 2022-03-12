#include<stdio.h>

int func(int n){
    if(n == 2)
        return 4;
    else if(n == 1)
        return 2;
    return func(n-1)+2*(n-1);
}

int main(){
    int n,count;
    scanf("%d",&n);

    count = func(n);
    printf("%d",count);

    return 0;
}