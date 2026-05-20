#include <stdio.h>

int main()
{
    /*
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30
    */

    // Declaração das variáveis em snake case
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2, pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    char estado_1, estado_2;
    char codigo_1[4], codigo_2[4], cidade_1[50], cidade_2[50];

    // Entrada de dados da Carta 1
    printf("Digite o Estado 1 (uma letra): ");
    scanf(" %c", &estado_1);
    printf("Digite o Codigo 1 (ex: A01): ");
    scanf("%s", codigo_1);
    printf("Digite o Nome da Cidade 1: ");
    scanf(" %[^\n]", cidade_1);
    printf("Digite a Populacao 1: ");
    scanf("%lu", &populacao_1);
    printf("Digite a Area 1: ");
    scanf("%f", &area_1);
    printf("Digite o PIB 1: ");
    scanf("%f", &pib_1);
    printf("Digite o Numero de Pontos Turisticos 1: ");
    scanf("%d", &pontos_turisticos_1);

    // Entrada de dados da Carta 2
    printf("\nDigite o Estado 2 (uma letra): ");
    scanf(" %c", &estado_2);
    printf("Digite o Codigo 2 (ex: B02): ");
    scanf("%s", codigo_2);
    printf("Digite o Nome da Cidade 2: ");
    scanf(" %[^\n]", cidade_2);
    printf("Digite a Populacao 2: ");
    scanf("%lu", &populacao_2);
    printf("Digite a Area 2: ");
    scanf("%f", &area_2);
    printf("Digite o PIB 2: ");
    scanf("%f", &pib_2);
    printf("Digite o Numero de Pontos Turisticos 2: ");
    scanf("%d", &pontos_turisticos_2);

    // Cálculos de Densidade e PIB per Capita
    float densidade_1 = (float)populacao_1 / area_1;
    float pib_capita_1 = (pib_1 * 1e9) / (float)populacao_1;
    float densidade_2 = (float)populacao_2 / area_2;
    float pib_capita_2 = (pib_2 * 1e9) / (float)populacao_2;

    // Cálculo do Super Poder (soma de todos os atributos numéricos)
    float super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_capita_1 + (1.0f / densidade_1);
    float super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_capita_2 + (1.0f / densidade_2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_capita_1);
    printf("Super Poder: %.2f\n", super_poder_1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_capita_2);
    printf("Super Poder: %.2f\n", super_poder_2);

    // Comparação usando operadores relacionais (1 para verdadeiro, 0 para falso)
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao_1 > populacao_2);
    printf("Area: Carta 1 venceu (%d)\n", area_1 > area_2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_1 > pib_2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_turisticos_1 > pontos_turisticos_2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_1 < densidade_2); // Menor valor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_capita_1 > pib_capita_2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_1 > super_poder_2);

    return 0;
}
