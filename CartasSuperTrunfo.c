#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definição das variáveis das cidades
    char estado1, estado2; // Representa a letra do estado
    char codigo1[5], codigo2[5]; // Código da carta (ex: A01, B02)
    char nomeCidade1[50], nomeCidade2[50]; // Nome das cidades
    unsigned long int populacao1, populacao2; // População total
    float area1, area2; // Área em km²
    float pib1, pib2; // PIB em bilhões de reais
    int pontosTuristicos1, pontosTuristicos2; // Número de pontos turísticos
    float densidadePopulacional1, densidadePopulacional2; // Habitantes por km²
    float pibPerCapita1, pibPerCapita2; // PIB per capita
    float superPoder1, superPoder2; // Atributo especial que resume a força da cidade

    // Entrada de dados da primeira cidade
    printf("\nDigite a letra do estado da primeira cidade: ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira cidade: ");
    scanf(" %s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Digite a população da primeira cidade: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área da primeira cidade (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados da segunda cidade
    printf("\nDigite a letra do estado da segunda cidade: ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda cidade: ");
    scanf(" %s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Digite a população da segunda cidade: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área da segunda cidade (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo das métricas
    densidadePopulacional1 = populacao1 / area1; // Habitantes por km²
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita em reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Menu para escolha do atributo de comparação
    int opcao;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional (menor vence)\n6 - PIB Per Capita\n7 - Super Poder\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    float valor1, valor2; // Armazena os valores do atributo escolhido
    char atributo[30]; // Nome do atributo escolhido
    int inverso = 0; // Define se a menor ou maior pontuação vence (para densidade populacional)

    // Estrutura de decisão para definir qual atributo será comparado
    switch(opcao) {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            sprintf(atributo, "População");
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            sprintf(atributo, "Área");
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            sprintf(atributo, "PIB");
            break;
        case 4:
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            sprintf(atributo, "Pontos Turísticos");
            break;
        case 5:
            valor1 = densidadePopulacional1;
            valor2 = densidadePopulacional2;
            sprintf(atributo, "Densidade Populacional");
            inverso = 1; // Menor valor vence
            break;
        case 6:
            valor1 = pibPerCapita1;
            valor2 = pibPerCapita2;
            sprintf(atributo, "PIB Per Capita");
            break;
        case 7:
            valor1 = superPoder1;
            valor2 = superPoder2;
            sprintf(atributo, "Super Poder");
            break;
        default:
            printf("\nOpção inválida! Reinicie o programa e escolha uma opção válida.\n");
            return 1;
    }

    // Exibição do resultado da comparação
    printf("\nResultado da comparação:\n");
    printf("Atributo: %s\n", atributo);
    printf("%s: %.2f\n", nomeCidade1, valor1);
    printf("%s: %.2f\n", nomeCidade2, valor2);

    // Determinar o vencedor com base na regra do atributo escolhido
    if ((valor1 > valor2 && !inverso) || (valor1 < valor2 && inverso)) {
        printf("Vencedor: %s\n", nomeCidade1);
    } else if ((valor2 > valor1 && !inverso) || (valor2 < valor1 && inverso)) {
        printf("Vencedor: %s\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}

