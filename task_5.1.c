#include <stdio.h>
#include <stdlib.h>

void ft_putnbr (int num)
{
    printf("%d\n", num);
}

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);
    ft_putnbr(number);
    return 0;
}