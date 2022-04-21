#include <stdio.h>

int main()
{
    int hour, min, sec, afterTime, change;
    scanf("%d:%d:%d", &hour, &min, &sec);
    scanf("%d", &afterTime);

    printf("After %d seconds is ", afterTime);

    if (afterTime / 3600 > 0)
    {
        change = afterTime / 3600;
        hour += change;
        afterTime -= change * 3600;
    }

    if (afterTime / 60 > 0)
    {
        change = afterTime / 60;
        min += change;
        afterTime -= change * 60;
    }

    if (afterTime >= 0)
    {
        sec += afterTime;

        if (sec >= 60)
        {
            sec -= 60;
            min += 1;
        }
        if (min >= 60)
        {
            min -= 60;
            hour += 1;
        }
        if(hour>=24)
        {
            hour -= 24;
        }
    }

    printf("%d:%d:%d", hour, min, sec);

    return 0;
}
