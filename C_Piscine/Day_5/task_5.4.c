#include <stdio.h>
#include <stdlib.h>

void  ft_strncpy (char *copy, char *str, int n)
{
    for(int ind=0; str[ind]!='\0' && ind<n; ind++)
    {
        copy[ind] = str[ind];
    }
}

int main (int argc, char *argv[])
{
    int len = 0;
    int n = atoi(argv[2]);
    for (int ind=0; argv[1][ind]!='\0'; ind++)
    {
        len++;
    }
    char string2[len];
    ft_strncpy(string2, argv[1], n);
    printf("%s\n", string2);

    return 0;
}