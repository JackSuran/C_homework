#include <stdio.h>

int main()
{
    int n, i, j, s1[10] = {10, 21, 34, 12, 15, 8, 17, 20, 23, 30}, s2[10];

    scanf("%d", &n);

    for (i = 0; i < n; i++)

        scanf("%d", &s2[i]);

    for(i=0;i<10;i++){
        for(j=0;j<n;j++){
            if(s1[i]==s2[j]){
                printf("%5d",s2[j]);
                break;
            }
        }
    }

    return 0;
}