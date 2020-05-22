#include <stdio.h>
#include <stdlib.h>


void arr_make(int arr[], int len){
    
    int x, m;
    m = arr[len-1];
    
    for (x = len; x>=0;){
        if (x == 0){
           arr[x] = m;
           x = x-1;
        }
        if (x != 0){
            arr[x] = arr[x-1];
            x = x-1;
        }
        
    }
    for (x = 0; x<len; x++){
        if(x==len-1){
            printf("%d.\n", arr[x]);
        }
        else{
            printf("%d, ", arr[x]);
        }
    }

}

int main(){
    
    int n, x, num;

    printf ("Введите количество элементов>>");
    scanf ("%d", &n);
    int arr[n];
    int arr2;

    for (x = 0; x<n; x++){
        arr[x] = rand()%100;
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