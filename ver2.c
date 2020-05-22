#include <stdio.h>

int main(){

    int num1, num2, num3, count;
    int n;
    num1 = 1;
    num2 = 1;
    count = 3;

    printf("Введи число от 1 до 12>> ");
    scanf("%d", &n);
    
    if (n == 1){
        printf("Результат: %d", num1);
    }
    
    if (n == 2){
        printf("Результат: %d", num1);
    }
    
    else{
        
       for (num3; num3<=100;){

            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
            if (n == count){
                printf("Результат: %d", num3);
            }
            count++;
        } 
    }
    

    return 0;
}