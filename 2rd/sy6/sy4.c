#include<stdio.h>
#include<ctype.h>

void mySwap(char *arr,int size);
int getCount(char *arr,int size,int val);
void printInfo(int val,int count);

int main(){
    int i=0,count;
    char arr[80];
    char ch;
    while((ch=getchar())!='\n'){
        arr[i++] = ch;
    }
    arr[i]='\0';

    for(i=0;i<80;i++){
        if(arr[i]=='\0') break;
        if(arr[i]>='A'&&arr[i]<='Z'){
            arr[i] = tolower(arr[i]);
        }
        
    }

    mySwap(arr,80);

    for(i=0;i<80;i++){
        if(arr[i]=='\0') break;
        if(arr[i]>='a'&&arr[i]<='z'){
            ch = arr[i];
            count = getCount(arr,80,arr[i]);
            printInfo(ch,count);
        }
    }

    return 0;
}

void mySwap(char *arr,int size){
    int i=0,j;
    char temp;

    for(i=0;i<size-1;i++){
        if(arr[i]=='\0') break;
        if(!(arr[i]>='a'&&arr[i]<='z')) continue;
        for(j=i+1;j<size-i-1;j++){
            if(arr[j]=='\0') break;
            if(arr[i]>arr[j]){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            else if(arr[i]==arr[j]){
                temp = arr[++i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int getCount(char *arr,int size,int val){
    int i;
    int count=0;
    for(i=0;i<size;i++){
        if(arr[i]=='\0') break;
        if(arr[i]==val){
            count++;
            arr[i]='*';
        }
    }
    return count;
}

void printInfo(int val,int count){
    printf("%c is %d\n",val,count);
}