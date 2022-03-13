#include<stdio.h>

int main(){
    int i,j,n;
    double temp,arr[20];
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }

    j=0;
    for(i=0;i<n;i++){
        
        while(arr[i]>=arr[j]&&j<n){
            j++;
        }
        if(j==n){
            break;
        }
    }
    
    temp = arr[i];
    arr[i]=arr[0];
    arr[0]=temp;

    for(i = 0;i<n;i++){
        printf("%lf  ",arr[i]);
    }

    return 0;
}