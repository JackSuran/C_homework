#include<stdio.h>

void printArr(int arr[],int size){
    int i;
    for(i = 0;i<size;i++)
        printf("%5d",arr[i]);
    printf("\n");
}

int main(){
    int insertNum,insertIndex,deleteIndex;
    int i,j=0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int arrIn[11];
    int arrDe[10];

    scanf("%d %d",&insertNum,&insertIndex);

    if(insertIndex>=10||insertIndex<0){ //新数组接收
        for(i = 0;i<10;i++){        
            arrIn[j++]=arr[i];
        }
        arrIn[10]=insertNum;
    }
    j=0; 
    for(i = 0;i<10;i++){
        if(j == insertIndex){
            arrIn[j++]=insertNum;
        }
        arrIn[j++]=arr[i];
    }

    scanf("%d",&deleteIndex);

    /////test/////
    // printf("%d %d %d\n",insertNum,insertIndex,deleteIndex);

    j=0; //新新数组删除
    for(i = 0;i<11;i++){
        if(deleteIndex<0||deleteIndex>11){
            deleteIndex=0;
        }
        if(i == deleteIndex)
            i++;
        arrDe[j++]=arrIn[i];
    }

    printArr(arr,10);
    printArr(arrIn,11);
    printArr(arrDe,10);

    return 0;
}