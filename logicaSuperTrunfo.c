#include <stdio.h> // Inclui a biblioteca padrão para funções de entrada e saída, como o printf.

/*
  Projeto: Super Trunfo em C
  Nível: Novato
  Objetivo: Comparar duas cartas com base em um atributo numérico usando if-else
 */

int main() {

    // PASSO 1: Receber os dados de duas cartas
    // Para este nível, os dados das cartas são definidos diretamente no código,
    // como se já tivessem sido "cadastradas". 
    // Utilizamos variáveis para cada atributo de cada carta.

    // Carta 1: Dados da cidade de São Paulo
    char carta1_nome[] = "São Paulo";
    char carta1_codigo[] = "SP1";
    char carta1_estado[] = "SP";
    int carta1_populacao = 12396372;
    float carta1_area = 1521.11; // em km²
    float carta1_pib = 714.68; // em bilhões de R$
    int carta1_pontos_turisticos = 15;

    // Carta 2: Dados da cidade do Rio de Janeiro
    char carta2_nome[] = "Rio de Janeiro";
    char carta2_codigo[] = "RJ1";
    char carta2_estado[] = "RJ";
    int carta2_populacao = 6211223;
    float carta2_area = 1255.0; // em km²
    float carta2_pib = 357.75; // em bilhões de R$
    int carta2_pontos_turisticos = 20;


    // PASSO 2: Calcular Densidade Populacional e PIB per capita 
    // Estes são atributos calculados a partir dos dados existentes.
    
    // Densidade Populacional = População / Área 
    float carta1_densidade = carta1_populacao / carta1_area;
    float carta2_densidade = carta2_populacao / carta2_area;
    
    // PIB per capita = (PIB * 1 bilhão) / População 
    // Multiplicamos o PIB por 1.000.000.000 para converter de bilhões para a unidade.
    float carta1_pib_per_capita = (carta1_pib * 1000000000) / carta1_populacao;
    float carta2_pib_per_capita = (carta2_pib * 1000000000) / carta2_populacao;


    // Exibição dos dados das cartas (para clareza) 
    // Esta parte ajuda a visualizar as cartas que estão competindo.
    printf("### DADOS DAS CARTAS ###\n");
    printf("Carta 1: %s (%s)\n", carta1_nome, carta1_estado);
    printf("  - População: %d\n", carta1_populacao);
    printf("  - Área: %.2f km²\n", carta1_area);
    printf("  - PIB: R$ %.2f bilhões\n", carta1_pib);
    printf("  - Densidade: %.2f hab/km²\n\n", carta1_densidade);

    printf("Carta 2: %s (%s)\n", carta2_nome, carta2_estado);
    printf("  - População: %d\n", carta2_populacao);
    printf("  - Área: %.2f km²\n", carta2_area);
    printf("  - PIB: R$ %.2f bilhões\n", carta2_pib);
    printf("  - Densidade: %.2f hab/km²\n\n", carta2_densidade);
    

    // PASSO 3, 4 e 5: Comparar um atributo, determinar vencedor e exibir resultado 
    // A escolha do atributo (População) é feita diretamente no código. 
    // A regra é: a carta com o maior valor vence.
    
    printf("#### COMPARANDO AS CARTAS ###\n");
    printf("Atributo de Comparação: População\n");
    printf("Carta 1 %s (SP): %d\n", carta1_nome, carta1_populacao);
    printf("Carta 2 %s (RJ): %d\n", carta2_nome, carta2_populacao);
    printf("\n");

    // Aqui está a lógica de decisão principal do jogo!
    // Usamos 'if' para a primeira verificação.
    if (carta1_populacao > carta2_populacao) {
        // Se a população da carta 1 for maior, este bloco é executado.
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
    } 
    // Se a primeira condição for falsa, usamos 'else if' para uma segunda verificação.
    else if (carta2_populacao > carta1_populacao) {
        // Se a população da carta 2 for maior, este bloco é executado.
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
    } 
    // Se nenhuma das condições anteriores for verdadeira, usamos 'else'.
    else {
        // Este bloco só é executado se os valores forem iguais.
        printf("Resultado: Empate!\n");
    }

    // O 'return 0' indica ao sistema operacional que o programa terminou com sucesso.
    return 0;
}
