#include <stdio.h>

int main()
{
    // Declaração das variáveis em snake case
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2, pib_1, pib_2;
    int opcao, pontos_turisticos_1, pontos_turisticos_2;
    char pais_1[40], pais_2[40];

    // Entrada de dados da Carta 1
    printf("Digite o nome do País 1: ");
    scanf(" %[^\n]", pais_1);
    printf("Digite a Populacao 1: ");
    scanf("%lu", &populacao_1);
    printf("Digite a Area 1: ");
    scanf("%f", &area_1);
    printf("Digite o PIB 1: ");
    scanf("%f", &pib_1);
    printf("Digite o Numero de Pontos Turisticos 1: ");
    scanf("%d", &pontos_turisticos_1);

    // Entrada de dados da Carta 2
    printf("Digite o nome do País 2: ");
    scanf(" %[^\n]", pais_2);
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
    float pib_per_capita_1 = (pib_1 * 1e9) / (float)populacao_1;
    float densidade_2 = (float)populacao_2 / area_2;
    float pib_per_capita_2 = (pib_2 * 1e9) / (float)populacao_2;

    // Exibição do menu interativo para escolha do atributo
    printf("Escolha uma opção para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade\n");
    scanf("%d", &opcao);

    // Impressão dos nomes dos países para contexto do jogador
    printf("País 1: %s\n", pais_1);
    printf("País 2: %s\n", pais_2);

    // Estrutura de decisão para comparar a opção selecionada no menu
    switch (opcao)
    {
    case 1:
        // Comparação baseada no atributo População
        printf("Atributo: População\n");
        printf("Carta 1 (%s): %lu\n", pais_1, populacao_1);
        printf("Carta 2 (%s): %lu\n", pais_2, populacao_2);

        // Estrutura condicional aninhada para verificar empate ou vencedor
        if (populacao_1 == populacao_2)
        {
            printf("Empate!\n");
        }
        else
        {
            // Regra padrão: Maior valor vence
            if (populacao_1 > populacao_2)
            {
                printf("Carta 1 (%s) venceu!\n", pais_1);
            }
            else
            {
                printf("Carta 2 (%s) venceu!\n", pais_2);
            }
        }
        break;

    case 2:
        // Comparação baseada no atributo Área
        printf("Atributo: Área\n");
        printf("Carta 1 (%s): %.2f\n", pais_1, area_1);
        printf("Carta 2 (%s): %.2f\n", pais_2, area_2);

        // Estrutura condicional aninhada para verificar empate ou vencedor
        if (area_1 == area_2)
        {
            printf("Empate!\n");
        }
        else
        {
            // Regra padrão: Maior valor vence
            if (area_1 > area_2)
            {
                printf("Carta 1 (%s) venceu!\n", pais_1);
            }
            else
            {
                printf("Carta 2 (%s) venceu!\n", pais_2);
            }
        }
        break;

    case 3:
        // Comparação baseada no atributo PIB
        printf("Atributo: PIB\n");
        printf("Carta 1 (%s): %.2f\n", pais_1, pib_1);
        printf("Carta 2 (%s): %.2f\n", pais_2, pib_2);

        // Estrutura condicional aninhada para verificar empate ou vencedor
        if (pib_1 == pib_2)
        {
            printf("Empate!\n");
        }
        else
        {
            // Regra padrão: Maior valor vence
            if (pib_1 > pib_2)
            {
                printf("Carta 1 (%s) venceu!\n", pais_1);
            }
            else
            {
                printf("Carta 2 (%s) venceu!\n", pais_2);
            }
        }
        break;

    case 4:
        // Comparação baseada no atributo Pontos Turísticos
        printf("Atributo: Pontos Turísticos\n");
        printf("Carta 1 (%s): %d\n", pais_1, pontos_turisticos_1);
        printf("Carta 2 (%s): %d\n", pais_2, pontos_turisticos_2);

        // Estrutura condicional aninhada para verificar empate ou vencedor
        if (pontos_turisticos_1 == pontos_turisticos_2)
        {
            printf("Empate!\n");
        }
        else
        {
            // Regra padrão: Maior valor vence
            if (pontos_turisticos_1 > pontos_turisticos_2)
            {
                printf("Carta 1 (%s) venceu!\n", pais_1);
            }
            else
            {
                printf("Carta 2 (%s) venceu!\n", pais_2);
            }
        }
        break;

    case 5:
        // Comparação baseada no atributo Densidade Populacional
        printf("Atributo: Densidade\n");
        printf("Carta 1 (%s): %.2f\n", pais_1, densidade_1);
        printf("Carta 2 (%s): %.2f\n", pais_2, densidade_2);

        // Estrutura condicional aninhada para verificar empate ou vencedor
        if (densidade_1 == densidade_2)
        {
            printf("Empate!\n");
        }
        else
        {
            // Regra especial: Menor valor vence
            if (densidade_1 < densidade_2)
            {
                printf("Carta 1 (%s) venceu!\n", pais_1);
            }
            else
            {
                printf("Carta 2 (%s) venceu!\n", pais_2);
            }
        }
        break;

    default:
        // Tratamento de segurança para opções inexistentes no menu
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}
