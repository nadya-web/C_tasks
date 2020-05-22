#include <stdio.h>

int main(){
    
    int row, col;
    int count = 5;
    int c;
    int x = 1;
    int y = 0;
    
    for(row=1; row<=6; row++){
        
        c = 1;    
            while(c<=5-count){
                
                printf("%d ", y);
                c++;
                
            }
            while (c<=5){
                
                printf("%d ", x);
                c++;
                
            }
        count--;
        printf("\n");
    }
    
    return 0;
}