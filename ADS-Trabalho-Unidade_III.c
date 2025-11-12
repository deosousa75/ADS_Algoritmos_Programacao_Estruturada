#include <stdio.h> // Biblioteca padrão de entrada e saída
#define VENDAS 5 // Define o número de dias de vendas

int main() {
    int precos[VENDAS], totalVendas = 0; // Declara um array para armazenar os preços e uma variável para o total
    
    printf("Digite o valor das vendas dos últimos %d dias:  \n", VENDAS);
    // Lê os preços dos produtos
    for (int i = 0; i < VENDAS; i++) {
        printf("Valor das vendas do dia %d: R$ ", i + 1); // Solicita o valor ao usuário
        scanf("%d", &precos[i]); // Armazena o valor no array
    }

    // Calcula o total de vendas
    for (int i = 0; i < VENDAS; i++) {
        totalVendas += precos[i]; // Soma os valores para obter o total
    }

    printf("\n\n");
    
    //Imprime o valor de vendas diárias
    for (int i = 0; i < VENDAS; i++) {
        printf("Vendas do dia %d: R$ %d\n", i + 1, precos[i]);
    }

    // Imprime o total de vendas
    printf("\nTotal de vendas: R$ %d\n", totalVendas);

    return 0;
}