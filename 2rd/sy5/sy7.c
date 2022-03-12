#include<stdio.h>

int main(){
    int a,b,c,d;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            for(c=1;c<=4;c++){
                d = 10 - (a+b+c);
                if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
                    if(((c==1)&&!(a==3)) || (!(c==1)&&(a==3))){
                        if(((b==1)&&!(d==4))||(!(b==1)&&(d==4))){
                            if(((d==2)&&!(c==3))||(!(d==2)&&(c==3))){
                                printf("abcd\n");
                                printf("%d%d%d%d",a,b,c,d);
                                break;
                            }
                        }
                    }
                } 
            }
        }
    }

    return 0;
}