#include <stdio.h>
#include <stdlib.h>

int  ft_is_prime (int num)
{
    int count = 0;
    for (int ind=2; ind<num; ind++)
    {
        if (num%ind == 0)
        {
            count++;
        }
    }
    if (count>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);
    int res = ft_is_prime(number);
    if (res == 0)
    {
        printf("%d - не является простым числом\n", number);
    }
    else
    {
        printf("%d - является простым числом\n", number);
    }
    return 0;
}