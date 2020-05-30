#include <stdio.h>

void ft_strcapitalize (char *str)
{
    for (int ind=0;str[ind]!='\0'; ind++)
    {
        if (ind == 0)
        {
            if (str[ind]>=97 && str[ind]<=122)
            {
                str[ind] = str[ind] - 32;
            }
        }
        
        else if (str[ind-1]==32 || str[ind-1]==43 || str[ind-1]==45)
        {
            if (str[ind]>=97 && str[ind]<=122)
            {
                str[ind] = str[ind] - 32;
            }
        }
        
        else 
        {
            if (str[ind]>=65 && str[ind]<=90)
            {
                str[ind] = str[ind] + 32;
            }
        }
    }
}

int main (int argc, char *argv[])
{
    ft_strcapitalize(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}