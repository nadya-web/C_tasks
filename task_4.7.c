#include <stdio.h>
#include <stdlib.h>

int   ft_find_next_prime (int num)
{
    int count;
    for (int ind=2; count!=1; ind++)
    {
        count = 0;
        if (num%ind != 0)
        {
            count++;
        }
        num++
    }
    

}

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);
    int res =  ft_find_next_prime(number);
    printf("%d - простое число\n", res);

    return 0;
}