#include <stdio.h>

typedef struct Student
{
    int num;
    char ch;
} Student;

int main()
{
    int n, m;
    char word[7] = "1level1";
    int groupCount = 0, count = 0, i = 0, j, isFirstRound = 1, isSame;
    Student temp, stu[7];

    scanf("%d %d", &n, &m);

    while (groupCount < 7)
    {
        if (i > n){
            i = 1;
            isFirstRound = 0;
        }

        isSame = 0;
        for (j = 0; j <= groupCount && !isFirstRound; j++)
        {
            if (i == stu[j].num){
                i++;
                isSame = 1;
                break;
            }
        }
        if(isSame)
            continue;

        if (count != 0 && count % m == 0)
        {
            stu[groupCount].num = i;
            stu[groupCount].ch = word[groupCount];
            groupCount++;
        }

        i++;
        count++;
    }

    for (i = 0; i < 7 - 1; i++)
    {
        for (j = 0; j < 7 - i - 1; j++)
        {
            if (stu[j].num > stu[j + 1].num)
            {
                temp = stu[j + 1];
                stu[j + 1] = stu[j];
                stu[j] = temp;
            }
        }
    }

    for (i = 0; i < 7; i++)
        printf("%d %c\n", stu[i].num, stu[i].ch);

    return 0;
}