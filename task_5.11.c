#include <stdio.h>

int  ft_str_is_alpha (char *str)
{
    int count = 0;
    for (int ind=0; str[ind]!='\0';ind++)
    {
        if (str[ind]>=65 && str[ind]<=90)
        {
            count+=0;
        }
        else if (str[ind]>=97 && str[ind]<=122)
        {
            count+=0;
        }
        else if (str[ind] == 32)
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
    else if (count > 0)
    {
        return 0;
    }
}

int main (int argc, char *argv[])
{
    int res = ft_str_is_alpha(argv[1]);
    printf("%d\n", res);
    return 0;
}