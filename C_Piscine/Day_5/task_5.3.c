#include <stdio.h>

void  ft_strcpy (char *copy, char *str)
{
    for(int ind=0; str[ind]!='\0'; ind++)
    {
        copy[ind] = str[ind];
    }
}

int main (int argc, char *argv[])
{
    int len = 0;
    for (int ind=0; argv[1][ind]!='\0'; ind++)
    {
        len++;
    }
    char string2[len];
    ft_strcpy(string2, argv[1]);
    printf("%s\n", string2);

    return 0;
}