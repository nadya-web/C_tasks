#include <stdio.h>
#include <stdlib.h>

int ft_strncmp (char *str, char *str2, int lim)
{
    char box = ' ';
    char box2 = ' ';
    for (int ind=0; ind<lim; ind++)
    {
        if (str[ind]!=str2[ind])
        {
            box = str[ind];
            box2 = str2[ind];
            break;
        }
    }
    if (box == ' ')
    {
        return 0;
    }
    else if (box>box2)
    {
        return 1;
    }
    else if (box<box2)
    {
        return -1;
    }
}

int main (int argc, char *argv[])
{
    int limit = atoi(argv[3]);
    int res = ft_strncmp(argv[1], argv[2], limit);
    printf("%d\n", res);
    return 0;
}