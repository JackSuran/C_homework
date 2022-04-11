#include <stdio.h>

int ToCountTwo(int num)
{
    int count = 0, temp;

    while (num)
    {
        temp = num % 10;
        num /= 10;

        if (temp == 2)
            count++;
    }

    return count;
}

int main(){
    int num;
    scanf("%d",&num);

    printf("count=%d",ToCountTwo(num));

    return 0;
}