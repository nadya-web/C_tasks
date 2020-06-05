#include "mylib.h"
#include <stdio.h>

void ft_swap(int *p_num1, int *p_num2)
{
    int box;
    box = *p_num1;
    *p_num1 = *p_num2;
    *p_num2 = box;
}

void ft_putstr(char *str)
{
    printf("%s\n", str);
}

int  ft_strlen(char *str)
{
    int counter = 0;
    for (int index = 0; str[index] != '\0'; index++)
    {
        counter++;
    }
    return counter;
}

int ft_strcmp (char *str, char *str2)
{
    char box = ' ';
    char box2 = ' ';
    for (int ind=0; str[ind]!='\0'; ind++)
    {
        if (str[ind]!=str2[ind])
        {
            box = str[ind];
            box2 = str2[ind];
            break;
        }
    }
    if (box == ' ')
    {
        return 0;
    }
    else if (box>box2)
    {
        return 1;
    }
    else if (box<box2)
    {
        return -1;
    }
}