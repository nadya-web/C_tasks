#include <stdio.h>

int main(){

    int n, m, min, max;
    int sum = 0;
    float a = 0.0f;
    int count = 0;
    int c;
    int x = 1;

    printf ("Введите количество элементов>>");
    scanf ("%d", &n);
    

    int arr[n];

    for (x; x<=n; x++){
        
        c = 0;
        printf ("Введите элемент>>");
        scanf ("%d", &m);
        arr[x] = m;
        sum += m;
        count++;
        if (x = 1 && c<1){
            
            min = m;
            max = m;
            c++;
        }
        else if (min>m){
            
            min = m;
        }
        else if (max<m){
            
            max = m;
        }
        
    }
    
    for (x = 1; x<=n; x++){
        
        if(x==n){
            
            printf("%d.\n", arr[x]);
        }
        else{
            
            printf("%d, ", arr[x]);
        }
        
    }
    
    a = sum/count;

    return 0;
    printf("Сумма элемнтов = %d\n", sum);
    printf("Среднее арифметическое = %.2f\n", a);
    printf("Наименьшее число = %d\n", min);
    printf("Наибольшее число = %d\n", max);
}