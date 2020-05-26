#include <stdio.h>
#include <stdlib.h>

void ft_ft(int *p_number)
{
    *p_number = 42;
}

int main(int argc, const char *array[])
{
    int number;
    number = atoi(array[1]);

    ft_ft(&number);
    printf("%d", number);

    return 0;
}