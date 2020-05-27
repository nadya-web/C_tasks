#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial (int num)
{
    int result = 1;
    for (int ind=1; ind<=num; ind++)
    {
        result *= ind;
    }
    return result;
}

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);
    int res = ft_iterative_factorial(number);
    printf("Факториал от числа %d = %d\n", number, res);
    return 0;
}