#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída

// Declaração dos protótipos das funções
float calcular_salario_bruto(float valor_hora, float horas_trabalhadas);
float calcular_desconto(float salario_bruto);
float calcular_salario_liquido(float salario_bruto, float valor_desconto);

// Implementação da função principal (main)
int main() {
    // Declaração das variáveis para armazenar as entradas do usuário e os resultados
    float valor_hora;
    float horas_trabalhadas;
    float salario_bruto;
    float valor_desconto;
    float salario_liquido;

    printf("Calculadora de Salário por Hora (C)\n\n");

    // 1. Solicita ao usuário o valor da hora de trabalho
    printf("\nDigite o valor da sua hora de trabalho (R$): ");
    scanf("%f", &valor_hora);

    // 1. Solicita a quantidade de horas trabalhadas
    printf("\nDigite a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas);
    
    printf("\n------------------\n");
    printf("\nResultados\n");

    // 2. Calcula o Salário Bruto usando a função
    // O valor retornado pela função é armazenado na variável 'salario_bruto'
    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);
    printf("\nSalário Bruto: R$ %.2f\n", salario_bruto);

    // 3. Calcula o Desconto de 9% usando a função
    // O salário bruto é passado como argumento e o valor do desconto é retornado
    valor_desconto = calcular_desconto(salario_bruto);
    printf("Desconto (9%%): R$ %.2f\n", valor_desconto);

    // 4. Calcula o Salário Líquido usando a função
    // Passamos o salário bruto e o valor do desconto para calcular o valor final
    salario_liquido = calcular_salario_liquido(salario_bruto, valor_desconto);
    printf("Salário Líquido: R$ %.2f\n", salario_liquido);
    
    printf("\n------------------\n");
    
    return 0;
}

// Detalhamento das funções
float calcular_salario_bruto(float valor_hora, float horas_trabalhadas) {
    // Salário Bruto = Valor da Hora * Horas Trabalhadas
    return valor_hora * horas_trabalhadas;
}

float calcular_desconto(float salario_bruto) {
    // Desconto é 9% do Salário Bruto. 9% é representado como 0.09
    const float ALIQUOTA_DESCONTO = 0.09f;
    return salario_bruto * ALIQUOTA_DESCONTO;
}

float calcular_salario_liquido(float salario_bruto, float valor_desconto) {
    // Salário Líquido = Salário Bruto - Valor do Desconto
    return salario_bruto - valor_desconto;
}