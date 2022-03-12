#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("%d/%d=",a,b);

    while(1){
        c = b/a + 1;
        a = a * c - b;
        b = b * c;
        printf("%d/%d+",1,c);

        if(a>1&&b%a==0){
            printf("1/%d",b/a);
            break;
        }
        else if(a == 1){
            printf("1/%d",b);
            break;
        }
    }
   
    return 0;
}