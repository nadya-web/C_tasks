#include <stdio.h>
#include <stdlib.h>

void  ft_div_mod(int num1, int num2, int *p_div, int *p_mod)
{
    *p_div = num1/num2;
    *p_mod = num1%num2;
}

int main(int argc, const char *array[]){

    int num1;
    int num2;
    int div, mod;

    num1 = atoi(array[1]);
    num2 = atoi(array[2]);

    ft_div_mod(num1, num2, &div, &mod);
    printf("%d - целая часть\n", div);
    printf("%d - остаток\n", mod);
    return 0;
}