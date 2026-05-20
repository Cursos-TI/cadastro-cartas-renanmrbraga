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

    // Declaração das variáveis de entrada
    int populacao1 = 0, pontos_turisticos1 = 0, populacao2 = 0, pontos_turisticos2 = 0;
    float area1 = 0, pib1 = 0, area2 = 0, pib2 = 0;
    char estado1 = 0, codigo1[4] = "", cidade1[50] = "", estado2 = 0, codigo2[4] = "", cidade2[50] = "";

    // Entrada de dados da Carta 1
    printf("Digite o Estado 1: \n");
    scanf(" %c", &estado1);
    printf("Digite o Código 1: \n");
    scanf("%s", codigo1);
    printf("Digite seu Nome da Cidade 1: \n");
    scanf(" %49[^\n]", cidade1);
    printf("Digite a População 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB 1: \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos 1: \n");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da Carta 2
    printf("Digite o Estado 2: \n");
    scanf(" %c", &estado2);
    printf("Digite o Código 2: \n");
    scanf("%s", codigo2);
    printf("Digite seu Nome da Cidade 2: \n");
    scanf(" %49[^\n]", cidade2);
    printf("Digite a População 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos 2: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 1 (multiplicando o PIB por 1 bilhão para ajustar a escala)
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_capita1 = (pib1 * 1e9) / populacao1;

    // Cálculos da Carta 2
    float densidade_populacional2 = (float)populacao2 / area2;
    float pib_capita2 = (pib2 * 1e9) / populacao2;

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    // Fim do programa
    return 0;
}
