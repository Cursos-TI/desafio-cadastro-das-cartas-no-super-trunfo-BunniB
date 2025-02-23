#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    int pontos1;
    float area1;
    float pib1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    int pontos2;
    float area2;
    float pib2;

    // Cadastro da Carta 1
    printf("\nCarta 1\n");

    //Imprimir e scanear dados do usuario da carta 1

    printf("Estado da carta (A a H): \n");
    scanf(" %c", &estado1);

    printf("Codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: (Sem espaços) \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área do estado em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos1);
    
    // Cadastro da Carta 2
    printf("\nCarta 2\n");

    //Imprimir e scanear dados do usuario da carta 2


    printf("Estado da carta (A a H): \n");
    scanf(" %c", &estado2);
   
    printf("Codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: (Sem espaços) \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área do estado em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos2);

    // Exibição dos Dados da Carta 1
    printf("\nCarta 1\n");
    printf("Estado da carta: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    // Exibição dos Dados da Carta 2
    printf("\nCarta 2\n");
    printf("Estado da carta: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}