#include <stdio.h>

int  ft_str_is_lowercase (char *str)
{
    int count = 0;
    for (int ind=0; str[ind]!='\0'; ind++)
    {
        if (str[ind]>=97 && str[ind]<=122)
        {
            count+=0;
        }
        else
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main (int argc, char *argv[])
{
    int res = ft_str_is_lowercase(argv[1]);
    printf("%d\n", res);
    return 0;
}