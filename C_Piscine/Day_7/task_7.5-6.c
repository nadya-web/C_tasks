#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str){

    //поиск количества слов
    int arrLength = 0;
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] == ' ' || str[i+1] == '\0'){
            arrLength++;
        }
        i++;
    }
    //выделение памяти для массива указателей
    char **array = (char **)malloc(arrLength * sizeof(char) + 1);
    array[arrLength] = '\0';

    //выделение памяти для массивов со значениями
    int length = 0;
    for (int i = 0; i < arrLength; i++){
        for (int j = 0; str[j] != '\0'; j++){
            if (str[j] == ' ' || str[j] == 10 || str[j+1] == '\0'){
                array[i] = (char*)malloc(length * sizeof(char)+1);
                array[i][j] == '\0';
                length = 0;
            }
            length++;
        }
    }
    //заполнение значениями
    int k = 0;
    for (int i = 0; i < arrLength; i++){
        for (int j = 0; str[k] != ' '; j++){

            if (str[k] == '\0'){
                break;
            }
            array[i][j] = str[k];
            k++;
        }
        k++;
    }
    return array;
}

void ft_print_words_tables (char **array){

    char *pointer = '\0';
    for (int i = 0; array[i] != pointer; i++){
        printf("%s\n", array[i]);
    }
}

int main(int argc, char **argv){

    char string[] = "this is a string";
    char **array = ft_split_whitespaces(string);
    ft_print_words_tables (array);

    free(array);
    return 0;
}