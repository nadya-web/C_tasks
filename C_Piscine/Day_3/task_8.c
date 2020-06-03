#include <stdio.h>

int ft_atoi (char *str)
{
    int res = 0;
    for (int ind=0; str[ind]!='\0'; ind++)
    {
        if (str[ind]>=48 && str[ind]<=57)
        {
            res += str[ind] - 48;
            if (str[ind+1]!='\0')
            {
                res*=10;
            }
        }
    }
    return res;
}

int main (int argc, char *argv[])
{
    int res = ft_atoi(argv[1]);
    printf("%d\n", res);
    return 0;
}
