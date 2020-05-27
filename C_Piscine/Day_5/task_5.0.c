#include <stdio.h>

void  ft_putstr (char *str)
{
    printf("%s\n", str);
}

int main (int argc, char *argv[])
{
    ft_putstr(argv[1]);
    return 0;
}