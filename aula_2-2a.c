#include <stdio.h>

int main(){

    int num, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    i = 0;

    while (num > 1){
        if (num % 2 == 0) 
            num /= 2;
        else 
            num = 3 * num + 1;
        printf("Passo %d: %d\n", i, num);
        i++;
    }

    return 0;
}