#include <stdio.h>

void  ft_strupcase (char *str)
{
    for (int ind=0; str[ind] != '\0'; ind++)
    {
        if (str[ind]>=97 && str[ind]<=122)
        {
            str[ind] = str[ind] - 32;
        }
    }
}

int main (int argc, char *argv[])
{
    ft_strupcase(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}