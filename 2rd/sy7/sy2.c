#include<stdio.h>

int main(){
    int count=0,index=0;
    char ch;
    while(1){
        ch = getchar();
        if(index==1){
            if(ch=='#'){
                break;
            }
            index = 0;
        }
        if(ch == '#'){
            index++;
        }
        if(ch>='0'&&ch<='9'){
            count++;
        }
    }
    printf("sum=%d",count);

    return 0;
}