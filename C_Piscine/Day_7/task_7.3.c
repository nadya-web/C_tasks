#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ft_ultimate_range (int **range, int min, int max){

    int minCopy = min;
    int len = max - min;
    int *lenOut = &len;
    *range = lenOut;

    int array[len];
    int *out = array;

    for (int i = 0; i < len; i++){
        array[i] = minCopy++;
    }

    return out;
}

int main (int argc, char **argv){

    int **size;
    int min = 5;
    int max = 10;

    int *array = ft_ultimate_range (size, min, max);
    for (int i = 0; i < **size; i++){
        printf("%d ", array[i]);
    }
    printf("\n%d - size of array", **size);

    return 0;
}