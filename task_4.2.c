#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power (int num, int power)
{
    int result = 1;
    for (int ind=1; ind<=power; ind++)
    {
        result *= num;
    }
    return result;
}

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);
    int pow = atoi(argv[2]);
    int res = ft_iterative_power(number, pow);
    printf("%d в степени %d = %d\n", number, pow, res);
    return 0;
}