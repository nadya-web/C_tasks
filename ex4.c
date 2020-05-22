#include <stdio.h>

int main(){
    
    int num1, num2, num3, i, x, y;
    num1 = 1;
    num2 = 1;
    i = 2;
    y = 0;
    int lst[12] = {0};
    
    lst[0] = num1;
    lst[1] = num2;

    printf("%d, %d, ", num1, num2);
    
    for (num3; num3<=100;){
        
        num3 = num1 + num2;
        lst[i] = num3;
        num1 = num2;
        num2 = num3;
        i++;
    }
    for (y;y<=12;y++){
        x = lst[i];
        printf("%d", x);
    }
    return 0;
}