// Início do código
#include <stdio.h>

int main()
{
    // Cartas
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2, pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    char pais_1[40], pais_2[40];

    // Menu
    int opcao_1, opcao_2;
    float valor_opcao_1_c1, valor_opcao_1_c2, valor_opcao_2_c1, valor_opcao_2_c2, soma_carta_1, soma_carta_2;
    char *nome_opcao_1 = "";
    char *nome_opcao_2 = "";

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
    printf("\nDigite o nome do País 2: ");
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

    // Menu Dinâmico 1
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade\n");
    scanf("%d", &opcao_1);

    // Extração dos valores do primeiro atributo
    switch (opcao_1)
    {
    case 1:
        nome_opcao_1 = "Populacao";
        valor_opcao_1_c1 = (float)populacao_1;
        valor_opcao_1_c2 = (float)populacao_2;
        break;
    case 2:
        nome_opcao_1 = "Area";
        valor_opcao_1_c1 = area_1;
        valor_opcao_1_c2 = area_2;
        break;
    case 3:
        nome_opcao_1 = "PIB";
        valor_opcao_1_c1 = pib_1;
        valor_opcao_1_c2 = pib_2;
        break;
    case 4:
        nome_opcao_1 = "Pontos Turisticos";
        valor_opcao_1_c1 = (float)pontos_turisticos_1;
        valor_opcao_1_c2 = (float)pontos_turisticos_2;
        break;
    case 5:
        nome_opcao_1 = "Densidade";
        valor_opcao_1_c1 = densidade_1;
        valor_opcao_1_c2 = densidade_2;
        break;
    default:
        printf("Opção inválida.\n");
        return 0; // Encerra o jogo se errar o menu
    }

    // Menu Dinâmico 2
    printf("\nEscolha o SEGUNDO atributo para comparar:\n");
    if (opcao_1 != 1)
        printf("1. População\n");
    if (opcao_1 != 2)
        printf("2. Área\n");
    if (opcao_1 != 3)
        printf("3. PIB\n");
    if (opcao_1 != 4)
        printf("4. Pontos Turísticos\n");
    if (opcao_1 != 5)
        printf("5. Densidade\n");
    scanf("%d", &opcao_2);

    // Validação extra para impedir a quebra da regra
    if (opcao_1 == opcao_2)
    {
        printf("Erro: Você escolheu o mesmo atributo duas vezes.\n");
        return 0;
    }

    // Extração dos valores do segundo atributo
    switch (opcao_2)
    {
    case 1:
        nome_opcao_2 = "Populacao";
        valor_opcao_2_c1 = (float)populacao_1;
        valor_opcao_2_c2 = (float)populacao_2;
        break;
    case 2:
        nome_opcao_2 = "Area";
        valor_opcao_2_c1 = area_1;
        valor_opcao_2_c2 = area_2;
        break;
    case 3:
        nome_opcao_2 = "PIB";
        valor_opcao_2_c1 = pib_1;
        valor_opcao_2_c2 = pib_2;
        break;
    case 4:
        nome_opcao_2 = "Pontos Turisticos";
        valor_opcao_2_c1 = (float)pontos_turisticos_1;
        valor_opcao_2_c2 = (float)pontos_turisticos_2;
        break;
    case 5:
        nome_opcao_2 = "Densidade";
        valor_opcao_2_c1 = densidade_1;
        valor_opcao_2_c2 = densidade_2;
        break;
    default:
        printf("Opção inválida.\n");
        return 0;
    }

    // Se a opção escolhida for 5 (Densidade), soma-se o inverso (1 / valor) para beneficiar o menor número.
    float parcela_1_c1 = (opcao_1 == 5) ? (1.0 / valor_opcao_1_c1) : valor_opcao_1_c1;
    float parcela_1_c2 = (opcao_1 == 5) ? (1.0 / valor_opcao_1_c2) : valor_opcao_1_c2;

    float parcela_2_c1 = (opcao_2 == 5) ? (1.0 / valor_opcao_2_c1) : valor_opcao_2_c1;
    float parcela_2_c2 = (opcao_2 == 5) ? (1.0 / valor_opcao_2_c2) : valor_opcao_2_c2;

    soma_carta_1 = parcela_1_c1 + parcela_2_c1;
    soma_carta_2 = parcela_1_c2 + parcela_2_c2;

    printf("\nResultado da Comparação:\n\n");

    // Cabeçalho da tabela (alinhamento em colunas usando espaços)
    printf("%-20s %-15s %-15s %-15s\n", "Atributo", pais_1, pais_2, "Vencedor");

    // Análise do Atributo 1
    int venceu_1 = (opcao_1 == 5) ? (valor_opcao_1_c1 < valor_opcao_1_c2) : (valor_opcao_1_c1 > valor_opcao_1_c2);
    int empate_1 = (valor_opcao_1_c1 == valor_opcao_1_c2);
    printf("%-20s %-15.2f %-15.2f %-15s\n", nome_opcao_1, valor_opcao_1_c1, valor_opcao_1_c2, empate_1 ? "Empate" : (venceu_1 ? pais_1 : pais_2));

    // Análise do Atributo 2
    int venceu_2 = (opcao_2 == 5) ? (valor_opcao_2_c1 < valor_opcao_2_c2) : (valor_opcao_2_c1 > valor_opcao_2_c2);
    int empate_2 = (valor_opcao_2_c1 == valor_opcao_2_c2);
    printf("%-20s %-15.2f %-15.2f %-15s\n", nome_opcao_2, valor_opcao_2_c1, valor_opcao_2_c2, empate_2 ? "Empate" : (venceu_2 ? pais_1 : pais_2));

    // Quebra de linha para separar a soma
    printf("\n");

    // Análise da Soma Final
    printf("%-20s %-15.2f %-15.2f ", "Soma Final", soma_carta_1, soma_carta_2);

    // Estrutura de decisão final com if-else e ternário
    if (soma_carta_1 == soma_carta_2)
    {
        printf("%-15s\n", "Empate"); // Completa a coluna Vencedor na tabela
        printf("\nResultado Final: Empate absoluto!\n");
    }
    else
    {
        printf("%-15s\n", (soma_carta_1 > soma_carta_2) ? pais_1 : pais_2); // Completa a coluna Vencedor na tabela

        // Uso do operador ternário para exibir dinamicamente o número e o nome do país vencedor
        printf("\nResultado Final: Carta %d (%s) venceu!\n", (soma_carta_1 > soma_carta_2) ? 1 : 2, (soma_carta_1 > soma_carta_2) ? pais_1 : pais_2);
    }

    return 0;
}
