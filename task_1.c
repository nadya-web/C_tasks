#include <stdio.h>

void ft_ft(int *p_number)
{
    *p_number = 42;
}

int main()
{
    int number;

    ft_ft(&number);
    //printf("%d", number);

    return 0;
}