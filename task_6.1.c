#include <stdio.h>

void ft_print_program_name (char *name)
{
    printf ("%s\n", name);
}

int main (int argc, char *argv[])
{
    ft_print_program_name(argv[0]);
    return 0;
}