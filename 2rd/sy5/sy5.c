#include<stdio.h>
#include<ctype.h>

int main(){
    int i = 0;
    char ch;
    char password[60];

    while((ch = getchar())!='\n'){ //输入需要加密元素
        password[i++] = ch;
    }
    password[i] = '\0';

    for(i = 0;i<60;i++){
        if(password[i]>='0'&&password[i]<='9'){ //数字变换
            if(password[i]<'5')
                password[i]+=5;
            else
                password[i]-=5;
            continue;
        }
        else if((password[i]>='A'&&password[i]<='Z')||(password[i]>='a'&&password[i]<='z')){ //大小写变换  
            if(password[i]<='Z')
                password[i]=tolower(password[i]);
            else password[i]=toupper(password[i]);

            if(password[i]=='x'||password[i]=='y'||password[i]=='z'){ //特殊位移
                if(password[i]=='x') password[i]='a';
                else if(password[i]=='y') password[i]='b';
                else password[i]='c';
            }
            else if(password[i]=='X'||password[i]=='Y'||password[i]=='Z'){ //特殊位移
                if(password[i]=='X') password[i]='A';
                else if(password[i]=='Y') password[i]='B';
                else password[i]='C';
            }
            else password[i]+=3; //普通位移
        }
    }

    printf("%s",password);

    return 0;
}