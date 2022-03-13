#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch, word[80];
    int i = 0, count[26]={0};

    // 输入数据
    while ((ch = getchar()) != '\n')
    {
        word[i++] = ch;
    }
    word[i] = '\0';

    // 大写转小写
    for (i = 0; i < 80; i++)
    {
        if (word[i] == '\0')
            break;
        if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] = tolower(word[i]);
    }

    // 记录数据
    for (i = 0; i < 80; i++)
    {
        if (word[i] == '\0')
            break;
        if (word[i] >= 'a' && word[i] <= 'z')
            count[word[i] - 'a']++;
    }

    // 输出数据
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            printf("%c is %d\n", i + 'a', count[i]);
    }

    return 0;
}