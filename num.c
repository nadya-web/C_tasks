#include <stdio.h>

int main(){
    
    int n, i;
    i = 1;
    printf("Введи число>>");
    scanf("%d", &n);
    printf("Результат:\n");
    
    for (i;i<=n;i++){
        
        if (i%2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}