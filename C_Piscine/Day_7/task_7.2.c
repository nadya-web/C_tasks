#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ft_range (int min, int max){

        int minCopy = min;
        int length = max-min;
        int array[length];
        int *out = array;

        for (int i = 0; i < length; i++){
            array[i] = minCopy++;
        }
        return out;
}

int main(int argc, char **argv){
    int min = 6;
    int max = 16;

    int *arrayOfNum = ft_range (min, max);
    for (int i = 0; arrayOfNum[i] != '\0'; i++){
        printf("%d ", arrayOfNum[i]);
    }

    return 0;
}