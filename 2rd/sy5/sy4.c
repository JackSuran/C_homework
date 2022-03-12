#include<stdio.h>

int func(int n){
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    return (n-1)*(func(n-2)+func(n-1));
}

int main(){
    int n;
    scanf("%d",&n);

    printf("%d",func(n));
    return 0;
}