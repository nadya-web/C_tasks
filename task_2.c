#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *p_num1, int *p_num2)
{
    int box;
    box = *p_num1;
    *p_num1 = *p_num2;
    *p_num2 = box;
}

int main(int argc, const char *array[])
{
    int num1;
    int num2;

    num1 = atoi(array[1]);
    num2 = atoi(array[2]);

    ft_swap(&num1, &num2);
    printf("%d - первое число\n", num1);
    printf("%d - второе число\n", num2);
    return 0;
}