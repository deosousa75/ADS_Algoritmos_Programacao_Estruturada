/// exemplo de laço da apostila


#include <stdio.h>
#include <string.h>

int main (){

    float avaliacao = 0, media = 0, soma = 0;
    char letra;
    int contador = 0;

    do {
        printf("\nDigite uma nota para avaliação:  ");
        scanf("%f", &avaliacao);
         
        
        soma += avaliacao;
        contador++;

        printf("\nDigite uma nota para continuar ou 's' para encerrar: \n");
        getchar(); // limpar o buffer do teclado    


    } while ((letra = getchar()) != 's');

    media = (soma/contador);
    printf("\nQuantidade de avaliação = %d, soma das notas = %.2f e média = %.2f. \n", contador, soma, media);

    return 0;
}