#include <stdio.h>

int main(){

    int n, m, count2, col;
    int x = 1;
    int y = 2;
    int z = 0;
    int count = -1;
    int row = 1;

    printf ("введи 1 сторону прямоугольника>>");
    scanf ("%d", &n);
    printf ("введи 2 сторону прямоугольника>>");
    scanf ("%d", &m);

    for (row; row<=m;){
        
        col = 1;
        if (row>2 && col<n){
            count2 = count;
            while (count2>0){
                printf("%d ", z);
                count2 = count2-1;
                col++;
            }
        }

        if (row>1 && col<=n){
            printf("%d ", y);
            col++;
        }
        
        if (col==row && col<=n){
        printf("%d ", x);
        col++;
        }
        
        if(col<n+1){
            printf("%d ", y);
            col++;
        }
        
        if (row<=m-2){
            while (col<=n){
                printf("%d ", z);
                col++;
            }
        }
        count+=1;
        printf("\n");

        row +=1;
    }

}