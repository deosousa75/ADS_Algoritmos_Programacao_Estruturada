#include <stdio.h>  

int main() {

    // Declaração das variáveis
    int num_1, num_2, num_3, soma, subtracao, multiplicacao; // Números inteiros
    float divisao; // Números reais para divisão

    // Solicitar ao usuário que insira três números inteiros

    printf("Informe três números inteiros para realizarmos essa atividade.\n");

    printf("\nDigite o primeiro número:  ");
    scanf("%d", &num_1);

    printf("\nDigite o segundo número:   ");  
    scanf("%d", &num_2);

    printf("\nDigite o terceiro número:   ");
    scanf("%d", &num_3);

    // 1. Calcule a soma, subtração, multiplicação e divisão dos três números.

    soma = num_1 + num_2 + num_3;
    printf("\nSoma dos três números:   %d\n", soma);
    
    subtracao = num_1 - num_2 - num_3;
    printf("Subtração dos três números:   %d\n", subtracao);

    multiplicacao = num_1 * num_2 * num_3;
    printf("Multiplicação dos três números:   %d\n", multiplicacao);

    if (num_2 == 0 || num_3 == 0) { 
        printf("Divisão por zero não é permitida.\n");
    }
    else{
        divisao = (float)num_1 / num_2 / num_3; // Conversão para float para evitar divisão inteira
        printf("Divisão dos três numeros:   %.2f\n", divisao); 
    }

    // 2. Verifique, utilizando operadores relacionais, se o primeiro número é maior que o segundo, e se o segundo é menor que o terceiro.

    if (num_1 > num_2) {
        printf("O primeiro número é maior que o segundo.\n");
    } else {
        printf("O primeiro número não é maior que o segundo.\n");
    }
    if (num_2 < num_3) {
        printf("O segundo número é menor que o terceiro.\n");
    } else {
        printf("O segundo número não é menor que o terceiro.\n");
    }
    
    // 3. Utilize operadores lógicos para verificar se o primeiro número é positivo e o segundo número é par. Caso ambas as condições sejam verdadeiras, o programa deverá exibir uma mensagem específica.

    printf("\nVerificando se o primeiro número é positivo e o segundo número é par...\n");
    if ((num_1 > 0) && (num_2 % 2 == 0)) {
        printf("O primeiro número é positivo e o segundo número é par.\n");
    } else {
        printf("Uma ou ambas as condições não são verdadeiras.\n");
    }   

    return 0;
}