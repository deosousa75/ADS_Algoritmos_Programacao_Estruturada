#include <stdio.h>

int main(){

    // Variáveis

    float precoVenda, valorImposto, valorDesconto, precoFinal;

    // Constantes

    const float taxaImposto = 0.10; // 10%
    const float descontoPadrao = 0.05; // 5%

    // Entrada de dados

    printf("Informe o preco de venda do produto: ");
    scanf("%f", &precoVenda);

    // Processamento

    valorImposto = precoVenda * taxaImposto;
    valorDesconto = precoVenda * descontoPadrao;
    precoFinal = precoVenda + valorImposto - valorDesconto;

    // Saída de dados
    printf("\nPreco de venda: R$ %.2f\n", precoVenda);
    printf("Valor do imposto (10%%): R$ %.2f\n", valorImposto);
    printf("Valor do desconto (5%%): R$ %.2f\n", valorDesconto);
    printf("Preco final do produto: R$ %.2f\n", precoFinal);    

    return 0;

}
