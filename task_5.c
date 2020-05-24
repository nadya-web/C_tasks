#include <stdio.h>

void ft_putstr(char *str)
{
    printf("%s\n", str);
}

int main(int argc, char *array[])
{
    ft_putstr(array[1]);
    return 0;
}