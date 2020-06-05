#include <stdio.h>

//ft_print_params

int main (int argc, char *argv[])
{
    for (int ind=1; ind<argc; ind++)
    {
        printf ("%s\n", argv[ind]);
    }
    return 0;
}