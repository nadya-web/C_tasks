#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci (int ind)
{
    if (ind == 1 && ind == 0)
    {
        return ind;
    }
    else if (ind>1)
    {
        return ft_fibonacci(ind-1) + ft_fibonacci(ind-2);
    }
    
}

int main (int argc, const char *argv[])
{
    int index = atoi(argv[1]);
    int res = ft_fibonacci(index);
    printf("%d\n", res);
    return 0;
}