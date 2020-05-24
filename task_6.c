#include <stdio.h>

int  ft_strlen(char *str)
{
    int counter = 0;
    for (int index = 0; str[index] != '\0'; index++)
    {
        counter++;
    }
    return counter;
}

int main(int argc, char *array[])
{
    int len;
    
    len = ft_strlen(array[1]);
    printf("%d - длина строки\n", len);
    
    return 0;
}