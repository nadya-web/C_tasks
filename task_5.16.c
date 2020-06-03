#include <stdio.h>

void ft_strcat (char *dest, char *str)
{
    int len = 0;
    for (int ind=0; dest[ind]!='\0'; ind++)
    {
        len++;
    }
    for (int ind=0; str[ind]!='\0'; ind++)
    {
        if (ind == 0 && str[ind]!=32 && dest[len-1]!=32)
        {
            dest[len] = 32;
            len++;
        }
        dest[len] = str[ind];
        len++;
    }
}

int main (int argc, char *argv[])
{
    ft_strcat(argv[1], argv[2]);
    printf("%s\n", argv[1]);
    return 0;
}