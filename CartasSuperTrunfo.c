#include <stdio.h>

int main(){

    // Definindo variáveis - para armazenar os dados de Curitiba e Salvador
    char estado1 = 'C', estado2 = 'D';
    char codigo1[] = "C01", codigo2[] = "C02";
    char nomeCidade1[] = "Curitiba", nomeCidade2[] = "Salvador";
    int populacao1 = 1963726, populacao2 = 2886698;
    float area1 = 435.04, area2 = 693.8;
    float pib1 = 92.94, pib2 = 63.97;
    int pontosTuristicos1 = 25, pontosTuristicos2 = 40;
    float densidadePopulacional1, densidadePopulacional2; // Novas variáveis para cálculo do nível intermediário
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados da primeira cidade-1
    printf(" \n Digite a letra do estado da primeira cidade\n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira cidade \n");
    scanf(" %s", codigo1);
    printf("Digite o nome da primeira cidade \n");
    scanf(" %s", nomeCidade1);
    printf("Digite a população da primeira cidade \n"); // Correção na mensagem
    scanf(" %d", &populacao1);
    printf("Digite a área da primeira cidade (em km²) \n"); // Correção na mensagem
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões de reais) \n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira cidade \n");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados da segunda cidade-2
    printf(" \n Digite a letra do estado da segunda cidade\n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda cidade \n");
    scanf(" %s", codigo2); // Correção no formato de leitura
    printf("Digite o nome da segunda cidade \n");
    scanf(" %s", nomeCidade2);
    printf("Digite a população da segunda cidade \n"); // Correção na mensagem
    scanf(" %d", &populacao2);
    printf("Digite a área da segunda cidade (em km²) \n"); // Correção na mensagem
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões de reais) \n");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade \n");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da densidade populacional - nível aventureiro
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    // Cálculo do PIB per capita - nível aventureiro (convertendo PIB de bilhões para reais)
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; 
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 

    // Saída de dados da primeira cidade-1
    printf(" \n Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código da cidade: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1); // Correção no formato do PIB
    printf("Pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f reais\n", pibPerCapita1);

    // Saída de dados da segunda cidade-2
    printf(" \n Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código da cidade: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2); // Correção no formato do PIB
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f reais\n", pibPerCapita2);
    printf("Finalizou\n");

    return 0;
}
