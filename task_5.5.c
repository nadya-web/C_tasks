#include <stdio.h>

void  ft_strstr (char *str, char *to_find)
{
    int len = 0;
    int count = 0;
    for (int ind=0; str[ind]!='\0'; ind++)
    {
        if (str[ind] == *to_find)
        {
            count++;
        }
        if (count >= 1)
        {
            if (str[ind+1]=='\0')
            {
                printf("%c\n", str[ind]);
            }
            else
            {
                printf("%c", str[ind]);
            }
        }
    }
}

int main (int argc, char *argv[])
{
    ft_strstr(argv[1], argv[2]);
    return 0;
}