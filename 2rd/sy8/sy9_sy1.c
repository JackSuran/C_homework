#include <stdio.h>

int main()
{
    char str[50], ch, DelCh;
    int i = 0;

    while ((ch = getchar()) != '\n')
    {
        str[i++] = ch;
    }
    str[i] = '\0';

    DelCh = getchar();

    printf("After delete:\n");

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != DelCh)
            printf("%c", str[i]);
        i++;
    }

    return 0;
}