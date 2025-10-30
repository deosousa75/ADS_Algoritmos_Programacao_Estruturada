#include <stdio.h>

int main(){

    int x, y;

    x = 10; y = x++;
    printf("valor de x => %d\n", x);
    printf("valor de y = x++ => %d\n\n", y);

    x = 10; y = x--;
    printf("valor de x => %d\n", x);
    printf("valor de y = x-- => %d\n\n", y);

    x = 10; y = ++x;
    printf("valor de x => %d\n", x);
    printf("valor de y = ++x => %d\n\n", y);

    x = 10; y = --x;
    printf("valor de x => %d\n", x);
    printf("valor de y = --x => %d\n\n", y);

    return 0;
}