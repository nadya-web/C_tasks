#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup (const char *src){
    char *string = malloc(strlen(src) + 1);

    for (int i = 0; src[i] != '\0'; i++){
        string[i] = src[i];
    }

    return string;
}

int main (int argc, char **argv){

    char string[5] = "hello";
    char *dest = ft_strdup (string);

    printf("%s - copy\n", dest);
    free(dest);

    return 0;
}