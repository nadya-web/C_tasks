#include <stdio.h>

int main(){

    int n, count2, col, row;
    int x = 1;
    int y = 2;
    int z = 0;
    
    printf ("введи сторону квадрата>>");
    scanf ("%d", &n);

    for (row = 1; row<=n; row++){
        
        col = 1;
        
        while (col<=n){
            
            if( row == 1 && col == 1){
                
                printf("%d ", x);
                col++;
            }
            
            if ( col == 1 && row == n){
                
                printf("%d ", y);
                col++;
            }
            printf("%d ", z);
            col++;
            
            if (row == col){
                
                printf("%d ", x);
                col++;
            }
            
            if (row+col==n+1){
                
                printf("%d ", y);
                col++;
            }
            
        }    
        printf("\n");
        
    }
   
}