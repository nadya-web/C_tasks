#include <stdio.h>
#include <stdlib.h>


void arr_make(int *arr, int len){

    int x;
    int arr2[len];

    for (x = 0; x<len;x++){
        
        arr2[x] = arr[x]*x;
    }
    for (x = 0; x<len; x++){
        if(x==len-1){
            printf("%d.\n", arr2[x]);
        }
        else{
            printf("%d, ", arr2[x]);
        }
    }
}

int main(){

    int n, x, num;

    printf ("Введите количество элементов>>");
    scanf ("%d", &n);
    int arr[n];
    int arr2[n];

    for (x = 0; x<n; x++){
        arr[x] = rand()%1000;
    }
    for (x = 0; x<n; x++){
        if(x==n-1){
            printf("%d.\n", arr[x]);
        }
        else{
            printf("%d, ", arr[x]);
        }
    }

    arr_make(arr, n);
    

    return 0;
}