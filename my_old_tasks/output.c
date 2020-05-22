#include <stdio.h>

int main(){
    
    int x = 1;
    int count = 0;
    
    for (x; x<=16; x++){
        printf("%d ", x);
        count ++;
        if(count == 4){
            printf("\n");
            count = 0;
        }
    }
    
    return 0;
}