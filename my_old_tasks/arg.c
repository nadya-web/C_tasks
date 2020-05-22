#include <stdio.h>

int len(int count, char *str[]){
    
    int l = 0;
    
    for (int i=0; i<count; i++)
    {
        for (int j=0; str[i][j]!='\0'; j++)
        {
            l++;
        }
    }
    return l-7;
}

int main(int argc, char *argv[])
{
    int length;
    
    length = len(argc, argv);
    printf("Длина строки: %d\n", length);
    
    for (int i=1;i<argc;i++)
    {
        for (int j=0; argv[i][j]!='\0'; j++)
        {
            if (argv[i][j+1] == '\0')
            {
                printf("%c ", argv[i][j]);
            }
            if (argv[i][j+1] != '\0')
            {
                printf("%c-", argv[i][j]);
            }
        }
    }
     
    return 0;
}