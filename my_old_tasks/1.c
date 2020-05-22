#include <stdio.h>
#include <string.h>

void amount_of_words(char sentence[])
{
    int n = 1;
    int count = 0;
    char words[n];
    
    for (int i=0; sentence[i]!='\0'; i++)
    {
        if (sentence[i]==' ')
        {
            count++;
        }
        else if (sentence[i]=='.')
        {
            count++;
        }
 
    }
    printf("Количество слов: %d", count);
}

void find_word(const char sentence[], const char word[])
{

    int i;
    char* x;
    int len = 0;
    int count = 0;
    
    x = strstr(sentence, word);
    for(i=0; word[i]!='\0'; i++)
    {
        len++;
    }
    for(i=0; count!=len; i++)
    {
        printf("%c", x[i]);
        count++;
    }
    
}

void palindrom(char sentence[])
{
    char* lst;
    int len;
    int count;
    char zero[] = {'\0'};
    char sep[] = " ";
    lst = strtok(sentence, sep);
    len = strlen(lst);
    count = 0;
    
    while(lst!=NULL)
    {
        count = 0;
        len = strlen(lst);
        
        for (int i=0; i<=len/2; i++)
        {
            for (int j=len-1; j>=len/2; j=j-1)
            {
                if (lst[i]==lst[j])
                {
                    count++;
                }
            }
        }
        if (count>=len/2+len%2)
        {
            printf("%s - палиндром\n", lst);
        }
        lst = strtok(NULL, sep);
    }
}

int main(int argc, char *sent[])
{
    //amount_of_words(sent[1]);
    //find_word(sent[1], sent[2]);
    palindrom(sent[1]);
    return 0;
    
}

