#include <string.h>
#include <stdio.h>

  

int main()

{

    // Взять любые две строки

    char s1[] = "GeeksforGeeks";

    char s2[] = "for";

    char* p;

  

    // Находим первое вхождение s2 в s1

    p = strstr(s1, s2);

  

    // печатает результат

    if (p) {

        printf("String found\n");

        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);

    } else

        printf("String not found\n");

  

    return 0;

}