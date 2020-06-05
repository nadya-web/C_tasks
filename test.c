#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"


int main(int argc, char *array[])
{
    int len;
    
    len = ft_strlen(array[1]);
    printf("%d - длина строки\n", len);
    ft_putstr(array[1]);
    
    return 0;
}