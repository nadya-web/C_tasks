#include <stdio.h>

int ft_strcmp (char *str, char *str2)
{
    char box = ' ';
    char box2 = ' ';
    for (int ind=0; str[ind]!='\0'; ind++)
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
    int res = ft_strcmp(argv[1], argv[2]);
    printf("%d\n", res);
    return 0;
}