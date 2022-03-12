#include<stdio.h>

int main(){
    int i,count=0;
    int arr[20]={81,55,102,84,204,105,56,85,58,202,101,83,104,103,82,201,59,203,57,205};

    for(i=0;i<20;i++){
        if(arr[i]<60){
            arr[i]=-1;
        }
        else if(arr[i]<=100){
            continue;
        }
        else if(arr[i]<=200){
            arr[i]=-2;
        }
        else arr[i]=-3;
    }

    for(i = 0;i<20;i++){
        count++;  
        printf("%5d",arr[i]);
        if(count%5==0)
            printf("\n");
    }

    return 0;
}