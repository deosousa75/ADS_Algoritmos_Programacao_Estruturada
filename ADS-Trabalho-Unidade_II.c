#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() { // Função principal

    int numero, soma = 0, contador = 0; // Variáveis para armazenar o número, a soma e o contador

    do { // Loop para ler números até o usuário digitar 0

        printf("\nDigite um número para continuar ou 0 para sair: "); // Solicita ao usuário um número
        scanf("%d", &numero); // Lê o número do usuário
        soma += numero; // Adiciona o número à soma
        contador++; // Incrementa o contador a cada entrada
    
    } while (numero != 0); // Continua até o usuário digitar 0

    printf("\nVocê digitou %d números.\n", contador - 1); // Subtrai 1 para não contar o zero
    printf("A soma dos números digitados é: %d\n", soma); // A soma inclui o zero, mas não afeta o resultado

    return 0;
}