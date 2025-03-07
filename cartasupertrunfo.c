#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("Desafio Super Trunfo\n");

    printf("\nCarta 1\n");
    printf("Estado da carta (A a H): "); scanf(" %c", &estado1);
    printf("Codigo da carta: "); scanf("%s", codigo1);
    printf("Nome da cidade (Sem espacos): "); scanf("%s", cidade1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area do estado em km²: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Numero de pontos turisticos: "); scanf("%d", &pontos1);

    printf("\nCarta 2\n");
    printf("Estado da carta (A a H): "); scanf(" %c", &estado2);
    printf("Codigo da carta: "); scanf("%s", codigo2);
    printf("Nome da cidade (Sem espacos): "); scanf("%s", cidade2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area do estado em km²: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Numero de pontos turisticos: "); scanf("%d", &pontos2);

    printf("\nCarta 1\n");
    printf("Estado da carta: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\n", estado1, codigo1, cidade1, populacao1);
    printf("Area: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\n", area1, pib1, pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)populacao1 / area1);
    printf("PIB per capita: %.2f\n", pib1 / (populacao1 + (populacao1 == 0)));

    printf("\nCarta 2\n");
    printf("Estado da carta: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\n", estado2, codigo2, cidade2, populacao2);
    printf("Area: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\n", area2, pib2, pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)populacao2 / area2);
    printf("PIB per capita: %.2f\n", pib2 / (populacao2 + (populacao2 == 0)));

    return 0;
}
