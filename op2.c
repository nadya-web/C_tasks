#include <stdio.h>

int main(){

    int x = 1;
    int y = 1;
    int row = 1;
    int col;
    int r,c;

    printf("Введите количество рядов>> ");
    scanf("%d",&r);
    printf("Введите количество колонок>> ");
    scanf("%d",&c);

    for (x; row<=r;row++){

        col = 1;
        
        for(x; col<=c*2; col++){

            if (row%2 == 1){

                if (x%2 == 1){

                    if(x<10){
                        printf("%d  ", x);
                    }
                    else{
                        printf("%d ", x);
                    }
                }
                x++;

            }

            else{

                if (y%2 == 0){

                    if(y<10){
                        printf("%d  ", y);
                    }
                    else{
                        printf("%d ", y);
                    }
                }
                y++;

            }
        }
        printf("\n");
    }
    return 0;
}