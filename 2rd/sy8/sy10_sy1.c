#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *wordList[10];
    char *word;
    int n, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        wordList[i] = (char *)malloc(sizeof(char) * 10);
        scanf("%s", wordList[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strlen(wordList[j]) > strlen(wordList[j + 1]))
            {
                word = wordList[j + 1];
                wordList[j + 1] = wordList[j];
                wordList[j] = word;
            }
        }
    }

    printf("Sorted result:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", wordList[i]);
    }

    return 0;
}