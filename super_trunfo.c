#include <stdio.h>

int main(){
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Códigos para a entrada de dados

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da Cidade: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Códigos para a saída de dados
    printf("Informações da Cidade:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n - Nome da Cidade: %s\n", codigo1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n - PIB: %.1f Bilhões de reais\n", area1, pib1);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos1);

    // Segunda Carta
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Códigos para a entrada de dados

    printf("Estado: ");
    scanf("%s", estado);

    printf("Código da Cidade: ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);

    // Códigos para a saída de dados
    printf("Informações da Cidade:\n");
    printf("Código da Carta: %s\n - Nome da Cidade: %s\n", codigo, cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n - PIB: %.2f Bilhões de reais\n", area, pib);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos);


    return 0;
}