#include <stdio.h>
#include <stdlib.h>

void ft_ultimate_div_mod(int *p_num1, int *p_num2)
{
    int box1 = *p_num1;
    int box2 = *p_num2;
    
    *p_num1 = box1/box2;
    *p_num2 = box1%box2;
}

int main(int argc, const char *array[])
{
    int num1;
    int num2;
    
    num1 = atoi(array[1]);
    num2 = atoi(array[2]);
    
    ft_ultimate_div_mod(&num1, &num2);
    
    printf("%d - целая часть\n", num1);
    printf("%d - остаток\n", num2);
    
    return 0;
}