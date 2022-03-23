#include <stdio.h>

int main()
{
    int valid_days, k_height, day_up, night_down, cur_height = 0, cur_days;

    scanf("%d %d", &k_height, &valid_days);

    for (cur_days = 0; cur_days < valid_days; cur_days++)
    {
        scanf("%d %d", &day_up, &night_down);

        cur_height += day_up;

        if (cur_height >= k_height)
        {
            printf("YES");
            return 0;
        }

        cur_height -= night_down;

        if (cur_height <= 0)
            cur_height = 0;
    }
    printf("NO");

    return 0;
}