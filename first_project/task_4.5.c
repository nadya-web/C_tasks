#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ft_sqrt(int num)
{
    return pow(num, 0.5);
}

int main(int argc, const char *argv[])
{
    int number = atoi(argv[1]);
    int res = ft_sqrt(number);
    printf("Корень из числа %d = %d\n", number, res);

    return 0;
}