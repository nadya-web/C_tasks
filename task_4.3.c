#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power (int num, int power)
{
    if (power == 1)
    {
        return num;
    }
    else
    {
        return num * ft_recursive_power(num, power-1);
    }
    
}

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);
    int pow = atoi(argv[2]);
    int res = ft_recursive_power(number, pow);
    printf("%d в степени %d = %d\n", number, pow, res);
    return 0;
}