#include <stdio.h>

void ft_swap(int *p_num1, int *p_num2)
{
    int box;
    box = *p_num1;
    *p_num1 = *p_num2;
    *p_num2 = box;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    
    ft_swap(&num1, &num2);
    //printf("%d\n", num1);
    //printf("%d\n", num2);
    return 0;
}