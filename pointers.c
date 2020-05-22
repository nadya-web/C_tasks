#include <stdio.h>

int main()
{
    int x = 45;
    int *px;
    px = &x;
    printf("%d\n", *px);
    
    char y = 'n';
    char *py;
    py = &y;
    printf("%c\n", *py);
    
    char z[] = "Hi, im Nadya";
    char *pz = z;
    printf("%s\n", pz);
    
    int a[5] = {1, 2, 3, 4, 5};
    int *pa = a;
    for (int i=0; i<5; i++)
    {
        printf("%d, ", pa[i]);
    }
    printf("\n\n");
    
    int b[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    int *pb1 = b[0];
    int *pb2 = b[1];
    int *pb3 = b[2];
    for (int i=0; i<3; i++)
    {
        printf("%d, ", pb1[i]);
    }
    printf("\n");
    for (int i=0; i<3; i++)
    {
        printf("%d, ", pb2[i]);
    }
    printf("\n");
    for (int i=0; i<3; i++)
    {
        printf("%d, ", pb3[i]);
    }
    
}

