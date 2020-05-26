#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial (int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * ft_recursive_factorial(num-1);
    }

}

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);
    int res = ft_recursive_factorial(number);
    printf("Факториал от числа %d = %d\n", number, res);
    return 0;
}