#include <stdio.h>

int main()
{
    /*
    Carta 1:
    Estado: SP
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: RJ
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
    char estado_1[3], estado_2[3], codigo_1[4], codigo_2[4], cidade_1[50], cidade_2[50];

    // Entrada de dados da Carta 1
    printf("Digite o Estado 1 (sigla, ex: SP): ");
    scanf("%s", estado_1);
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
    printf("\nDigite o Estado 2 (sigla, ex: RJ): ");
    scanf("%s", estado_2);
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

    // Exibição dos dados de comparação
    printf("\nCarta 1 - %s (%s) %.2f\n", cidade_1, estado_1, densidade_1);
    printf("Carta 2 - %s (%s) %.2f\n", cidade_2, estado_2, densidade_2);

    // Condição de vencedor utilizando os dados de comparação
    if (densidade_1 < densidade_2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    }
    else if (densidade_1 > densidade_2)
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
    }
    else
    {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
