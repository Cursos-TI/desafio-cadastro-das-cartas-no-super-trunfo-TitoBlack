#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nomeEstado [20], nomeEstado2 [20]; //Nome do estado.
    char estado, estado2;//Letra representando um dos estados.
    char codigoCarta [4], codigoCarta2 [4]; //Código da carta.
    char cidade [15], cidade2 [15]; //Nome da cidade
    int populaçao, populaçao2; //Número de habitantes da cidade.
    float area, area2; //Quilômetros quadrados da cidade.
    float pib, pib2; //Produto interno e bruto da cidade.
    int pontos, pontos2; //Quantidade de ponto turistico.

    printf("Carta 1:\n\n");

    printf("Informe o nome do estado: \n");
    scanf(" %s", nomeEstado);
    
    printf("O estado é %s\n", nomeEstado);

    printf("Informe uma letra para o estado: \n");
    scanf(" %c", &estado);

    printf("A letra do estado é %c\n", estado);

    printf("Informe o código da sua carta: \n");
    scanf(" %s", codigoCarta);

    printf("O código da carta é %s\n", codigoCarta);

    printf("Informe o nome da cidade: \n");
    scanf(" %s", cidade);

    printf("A cidade é %s\n", cidade);

    printf("Informe o número total da população da cidade: \n");
    scanf("%d", &populaçao);

    printf("A população é de %d\n", populaçao);

    printf("Informe a área total da cidade: \n");
    scanf("%f", &area);

    printf("A área total é de %.2f km²\n", area);

    printf("Informe o produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    printf("O PIB é de %.2f bilhões de reais\n", pib);

    printf("Informe quantos pontos turísticos tem a cidade: \n");
    scanf("%d", &pontos);

    printf("O total de pontos turísticos é de %d\n\n", pontos);

    printf("Os dados foram salvos, obrigado por enviar.\nAgora vamos preencher os dados da proxima carta antes de concluir!\n\n");

    printf("Carta 2:\n\n");

    printf("Informe o nome do estado: \n");
    scanf(" %s", nomeEstado2);
    
    printf("O estado é %s\n", nomeEstado2);

    printf("Informe uma letra para o estado: \n");
    scanf(" %c", &estado2);

    printf("A letra do estado é %c\n", estado2);

    printf("Informe o código da sua carta: \n");
    scanf(" %s", codigoCarta2);

    printf("O código da carta é %s\n", codigoCarta2);

    printf("Informe o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("A cidade é %s\n", cidade2);

    printf("Informe o número total da população da cidade: \n");
    scanf("%d", &populaçao2);

    printf("A população é de %d\n", populaçao2);

    printf("Informe a área total da cidade: \n");
    scanf("%f", &area2);

    printf("A área total é de %.2f km²\n", area2);

    printf("Informe o produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("O PIB é de %.2f bilhões de reais\n", pib2);

    printf("Informe quantos pontos turísticos tem a cidade: \n");
    scanf("%d", &pontos2);

    printf("O total de pontos turísticos é de %d\n", pontos2);

    printf("Perfeito!!!\n Estas são suas cartas, mantenha elas por perto ;D\n Até a próxima!\n\n");

    printf("Carta 1:\n");
    printf("Nome do Estado: %s\n", nomeEstado);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populaçao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pontos);

    printf("Carta 2:\n");
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", pontos2);

    return 0;
}
