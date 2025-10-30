#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\n num1 e num2 sao iguais? %d", num1==num2);

    printf("\n num1 e maior que num2? %d", num1>num2);

    printf("\n num1 e menor ou igual a num2? %d", num1<=num2);

    return 0;

}