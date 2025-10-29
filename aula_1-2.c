#include <stdio.h>

int main() {

    float num1, num2, media;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2); 
    media = (num1 + num2) / 2;
    printf("\nA média entre %.2f e %.2f é: %.2f\n", num1, num2, media);
    
    return 0;
}