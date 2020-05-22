#include <stdio.h>

int main(){

    int n,m; //диапазон
    int even, odd; //кол-во четных и нечетных чисел
    int x,y;

    even = 0;
    odd = 0;

    printf("Введи n>>");
    scanf("%d", &n);
    x = n;
    y = n;
    printf("Введи m>>");
    scanf("%d", &m);

    printf("Все четные числа в диапазоне %d - %d:\n", n, m);

    for (x; x<=m; x++){
        if(x%2 == 0){
            printf("%d\n", x);
            even++;
        }
    }

    printf("Кол-во четных чисел = %d\n", even);
    
    printf("Все нечетные числа в диапазоне %d - %d:\n", n, m);
    
    for (y; y<=m; y++){
        if(y%2 == 1){
            printf("%d\n", y);
            odd++;
        }
    }
    printf("Кол-во нечетных чисел = %d\n", odd);

    return 0;
}