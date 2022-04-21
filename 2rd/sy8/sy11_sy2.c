#include <stdio.h>

void fun(int num){
    int r;
    r = num % 2;

    if(num >= 2)
        fun(num/2);

    putchar('0' + r);
}

int main(){
    int num;
    scanf("%d",&num);

    fun(num);

    return 0;
}
