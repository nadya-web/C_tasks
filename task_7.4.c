#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str){

    int len;
    for(len = 0; str[len] != '\0';) len++;
    return len;
}

char  *ft_concat_params (int argc, char **argv){

    int ind = 1;
    int length = 0;
    while (ind < argc){
        length += ft_strlen(argv[ind]);
        length += 1;
        ind++;
    }

    char *string = malloc(length);
    int k = 0;

    for (int i = 1; i < argc; i++){
        for (int j = 0; argv[i][j] != '\0'; j++){

            string[k] = argv[i][j];
            k++;
        }
        string[k] = ' ';
        k++;
    }
    return string;
}

int main (int argc, char **argv){

    char *string = ft_concat_params (argc, argv);
    printf("%s\n", string);
    free(string);

    return 0;
}