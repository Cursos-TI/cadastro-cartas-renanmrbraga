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

    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    char estado1, codigo1[4], cidade1[50], estado2, codigo2[4], cidade2[50];

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

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1);
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}
