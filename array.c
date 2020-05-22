#include <stdio.h>

int main(){

    int n, x, m, min, max;
    int sum = 0;
    float a = 0.0f;
    int count = 0;

    printf ("Введите количество элементов>>");
    scanf ("%d", &n);
    
    int arr[n];
    
    for (x = 1; x<=n; x++){
        printf ("Введите элемент>>");
        scanf ("%d", &m);
        arr[x] = m;
        sum += m;
        count++;
    }
    for (x = 1; x<=n; x++){
        
        if(x==n){
            
            printf("%d.\n", arr[x]);
        }
        else{
            
            printf("%d, ", arr[x]);
        }
        
        min = arr[1];
        max = arr[1];
        
        if (min>arr[x]){
            
            min = arr[x];
        }
        
        else if (max<arr[x]){
            
            max = arr[x];
        }
    }
    a = sum/count;
    printf("Сумма элемнтов = %d\n", sum);
    printf("Среднее арифметическое = %.2f\n", a);
    printf("Наименьшее число = %d\n", min);
    printf("Наибольшее число = %d\n", max);
    return 0;
}

int min(int arr[n]){
    
    int min, x
    min = arr[1];
    
    for (x = 1; x<=n; x++){
     
        
        if (min>arr[x]){
            
            min = arr[x];
        }
    }
    return 0;
}