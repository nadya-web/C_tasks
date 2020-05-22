#include <stdio.h>
int main(){
    int a, b, c;
    printf ("введи 1 сторону прямоугольника>>");
    scanf ("%d", &a);
    printf ("введи 2 сторону прямоугольника>>");
    scanf ("%d", &b);
    c = a * b;
    printf ("площадь прямоугольника = %d\n", c);
    return 0;
}