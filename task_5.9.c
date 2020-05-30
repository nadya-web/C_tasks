#include <stdio.h>

void  ft_strlowcase (char *str)
{
    for (int ind=0; str[ind] != '\0'; ind++)
    {
        if (str[ind]>=65 && str[ind]<=90)
        {
            str[ind] = str[ind] + 32;
        }
    }
}

int main (int argc, char *argv[])
{
    ft_strlowcase(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}