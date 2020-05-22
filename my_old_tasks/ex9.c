#include <stdio.h>
#include <ctype.h>

void lowercase(int count, char *string[])
{
    for (int i=0; i<count; i++)
    {
        for (int j=0; string[i][j]!='\0'; j++)
        {
            string[i][j] = tolower(string[i][j]);
        }
    }
    for(int i=1; i<count; i++)
    {
        printf("%s ", string[i]);
    }
    printf("\n");
}

void uppercase(int count, char *string[])
{
    for (int i=0; i<count; i++)
    {
        for (int j=0; string[i][j]!='\0'; j++)
        {
            string[i][j] = toupper(string[i][j]);
        }
    }
    for(int i=1; i<count; i++)
    {
        printf("%s ", string[i]);
    }
    printf("\n");
}

void change(int count, char *string[])
{

    for (int i=0; i<count; i++)
    {
        for(int j=0; string[i][j]!='\0'; j++)
        {
            
            if (islower(string[i][j]))
            {
                string[i][j] = toupper(string[i][j]);
            }
            else if(isupper(string[i][j]))
            {
                string[i][j] = tolower(string[i][j]);
            }
        }
    }
    for(int i=1; i<count; i++)
    {
        printf("%s ", string[i]);
    }
    printf("\n");
}

int main(int argc, char *str[]) 
{
    
    for(int i=1; i<argc; i++)
    {
        printf("%s ", str[i]);
    }
    printf("\n");
    
    change(argc, str);
    lowercase(argc, str);
    uppercase(argc, str);
    
    
    return 0;
}
