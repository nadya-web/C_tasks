#include <stdio.h>
#include <stdlib.h>

int min_number(int arr[], int n){

    int min, x;
    min = arr[1];

    for (x = 1; x<=n; x++){


        if (min>arr[x]){

            min = arr[x];
        }
    }
    
    return min;
}

int max_number(int arr[], int n){

    int max, x;
    max = arr[1];
    
    for (x = 1; x<=n; x++){


        if (max<arr[x]){

            max = arr[x];
        }
    }
    
    return max;
}

int sred_arifmet(int arr[], int n){
    
    int x, m;
    int count = 0;
    int sum = 0;
    float a = 0.0f;
    
    for (x = 1; x<=n; x++){
     
        sum += arr[x];
        count++; 
    }
    a = sum/count;
    return a;
}

int summa(int arr[], int n){
    
    int x, m;
    int sum = 0;
    
    for (x = 1; x<=n; x++){
     
        sum += arr[x];    
    }
    return sum;
}

int arr_even_odd(int arr[], int n){
    
    int x, m;
    
    for(x = 1; x<=n; x++){
        
        if (x%2==1){
            m = arr[x];
            arr[x] = arr[x+1];
            arr[x+1] = m;
        }
    }
    
    for(x = 1; x<=n; x++){
    
        if(x==n){

            printf("%d.\n", arr[x]);
        }
        else{

            printf("%d, ", arr[x]);
        }
    }
}

int main(){

    int n, x, num;
    float num2;

    printf ("Введите количество элементов>>");
    scanf ("%d", &n);
    int arr[n];

    for (x = 1; x<=n; x++){
        arr[x] = rand()%100;
    }
    for (x = 1; x<=n; x++){
        if(x==n){
            printf("%d.\n", arr[x]);
        }
        else{
            printf("%d, ", arr[x]);
        }
    }
    
    arr_even_odd(arr, n);
    return 0;
}


if (x<len)
        if (x == 1 && c == 1){
            
            printf("%d, ", m);
            c++;
        }
        