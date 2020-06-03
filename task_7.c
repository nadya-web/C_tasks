#include <stdio.h>

void ft_strrev(char *str)
{
    int len = 0;
    char box;
    for (int ind=0; str[ind] != '\0'; ind++)
    {
        len++;
    }
    int ind2=len-1;
    for (int ind=0; ind<=len; ind++)
    {
        if (ind2>=len/2+len%2)
        {
            box = str[ind];
            str[ind] = str[ind2];
            str[ind2] = box;      
            ind2 = ind2-1;
        }
        else
        {
          break;  
        }
    }   
}

int main(int argc, char *array[])
{
    ft_strrev(array[1]);
    printf("%s\n", array[1]);
    return 0;
}