#include <stdio.h>

int main() {
    
    // Definindo variáveis - para armazenar os dados de curitiba e salvador 
char estado1 = 'C', estado2 = 'D';
char codigo1[] = "C01" , codigo2[] = "C02";
char nomeCidade1[] = "Curitiba", nomeCidade2[] = "Salvador";
int populacao1 = 1963726, populacao2 = 2886698;
float area1 = 435.04, area2 = 693.8;
float pib1 = 92.94, pib2 = 63.97;
int pontosTuristicos1 = 25, pontosTuristicos2 = 40;

// Entrada de dados da primeira cidade-1
printf( " \n Digite a letra do estado da primeira cidade\n" );
scanf(" %c", &estado1);
printf("Digite o código da primeira cidade \n" );
scanf(" %s", codigo1);
printf("Digite o nome da primeira cidade \n");
scanf(" %s", nomeCidade1);
printf("Digite a população da primeira cidade \n");
scanf(" %d", &populacao1);
printf("Digite o nome da primeira área da primeira cidade (em km) \n");
scanf(" %f", &area1);
printf("Digite o PIB da primeira cidade \n");
scanf(" %f", &pib1);
printf("Digite a quantidade de pontos turísticos da primeira cidade \n");
scanf(" %d", &pontosTuristicos1);

// Entrada de dados da segunda cidade-2 
printf(" \n Digite a letra do estado da segunda cidade\n");
scanf(" %c", &estado2);
printf("Digite o código da segunda cidade \n");
scanf(" %c", codigo2);
printf("Digite o nome da segunda cidade \n");
scanf(" %s", nomeCidade2);
printf("Digite o nome da população da segunda cidade \n");
scanf(" %d", &populacao2);
printf("Digite o nome da área da segunda cidade (em km) \n");
scanf(" %f", &area2);
printf("Digite o PIB da segunda cidade \n");
scanf(" %f", &pib2);
printf("Digite a quantidade de pontos turísticos da segunda cidade \n");
scanf(" %d", &pontosTuristicos2);

//Saída de dados da primeira cidade-1

printf(" \n Carta 1 \n");
printf("Estado: %c \n", estado1);
printf("Código da cidade: %s \n", codigo1);
printf("Nome da cidade: %s \n", nomeCidade1);
printf("População: %d \n", populacao1);
printf("Área: %.2f \n", area1);
printf("PIB: %f \n", pib1);
printf("Pontos turísticos: %d \n", pontosTuristicos1);

// Saída de dados da segunda cidade-2

printf(" \n Carta 2 \n");
printf("Estado: %c \n", estado2);
printf("Código da cidade: %s \n", codigo2);
printf("Nome da cidade: %s \n", nomeCidade2);
printf("População: %d \n", populacao2);
printf("Área: %f \n", area2);
printf("PIB: %.2f \n", pib2);
printf("Pontos turísticos: %d \n", pontosTuristicos2);

return 0;



}