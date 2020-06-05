#include <stdio.h>

// ft_rev_params

int main (int argc, char *argv[])
{
    char box;
    for (int ind=1; ind<argc; ind++)
    {
        int len=0;
        for (int ind4=0; argv[ind][ind4]!='\0'; ind4++)
        {
            len++;
        }
        int ind3=len-1;
        for (int ind2=0; ind2<=len/2; ind2++)
        {
            if (ind3>=len/2)
            {
                box = argv[ind][ind2];
                argv[ind][ind2] = argv[ind][ind3];
                argv[ind][ind3] = box;
                ind3=ind3-1;
            }
        }
    }
    for (int ind=1; ind<argc; ind++)
    {
        printf ("%s\n", argv[ind]);
    }
    return 0;
}