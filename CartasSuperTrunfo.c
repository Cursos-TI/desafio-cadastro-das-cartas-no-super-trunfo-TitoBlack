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
    char cidade [15], cidade2 [15]; //Nome da cidade.
    int populacao, populacao2; //Número de habitantes da cidade.
    double area, area2; //Quilômetros quadrados da cidade.
    double pib, pib2; //Produto interno e bruto da cidade.
    int pontos, pontos2; //Quantidade de ponto turistico.
    double densiPopulacao1, densiPopulacao2; //Densidade Populacional = População / área da cidade.
    double pibcapita1, pibcapita2; //PIB per Capita = PIB / população.


    printf("*** JOGO DO SUPER TRUNFO ***\n\n");

    //Iniciando a coleta de dados da primeira carta.
    printf("Carta 1:\n\n");

    printf("Informe o nome do estado: \n");//NOME DO ESTADO
    scanf(" %s", nomeEstado);
    
    printf("O estado é %s\n", nomeEstado);

    printf("Informe uma letra para o estado: \n");//LETRA DO ESTADO
    scanf(" %c", &estado);

    printf("A letra do estado é %c\n", estado);

    printf("Informe o código da sua carta: \n");//CÓDIGO DA CARTA
    scanf(" %s", codigoCarta);

    printf("O código da carta é %s\n", codigoCarta);

    printf("Informe o nome da cidade: \n");//NOME DA CIDADE
    scanf(" %s", cidade);

    printf("A cidade é %s\n", cidade);

    printf("Informe o número total da população da cidade: \n");//POPULAÇÃO
    scanf("%d", &populacao);

    printf("A população é de %d\n", populacao);

    printf("Informe a área total da cidade: \n");//ÁREA DA CIDADE
    scanf("%lf", &area);

    printf("A área total é de %.2f km²\n", area);

    printf("Informe o produto interno bruto da cidade: \n");//PIB
    scanf("%lf", &pib);

    printf("O PIB é de %.2f bilhões de reais\n", pib);

    printf("Informe quantos pontos turísticos tem a cidade: \n");//PONTOS TURISTICOS
    scanf("%d", &pontos);

    printf("O total de pontos turísticos é de %d\n\n", pontos);

    densiPopulacao1 = ((double)populacao / area); //calculando a densidade populacional.
    pibcapita1 = (pib *1000000000.0) / populacao; //calculando o PIB per Capita.

    printf("Os dados foram salvos, obrigado por enviar.\nAgora vamos preencher os dados da proxima carta antes de concluir!\n\n");

    //Iniciando a coleta de dados da segunda carta
    printf("Carta 2:\n\n");

    printf("Informe o nome do estado: \n");//NOME DO ESTADO
    scanf(" %s", nomeEstado2);
    
    printf("O estado é %s\n", nomeEstado2);

    printf("Informe uma letra para o estado: \n");//LETRA DO ESTADO
    scanf(" %c", &estado2);

    printf("A letra do estado é %c\n", estado2);

    printf("Informe o código da sua carta: \n");//CÓDIGO DA CARTA
    scanf(" %s", codigoCarta2);

    printf("O código da carta é %s\n", codigoCarta2);

    printf("Informe o nome da cidade: \n");//NOME DA CIDADE
    scanf(" %s", cidade2);

    printf("A cidade é %s\n", cidade2);

    printf("Informe o número total da população da cidade: \n");//POPULAÇÃO
    scanf("%d", &populacao2);

    printf("A população é de %d\n", populacao2);

    printf("Informe a área total da cidade: \n");//ÁREA DA CIDADE
    scanf("%lf", &area2);

    printf("A área total é de %.2f km²\n", area2);

    printf("Informe o produto interno bruto da cidade: \n");//PIB
    scanf("%lf", &pib2);

    printf("O PIB é de %.2f bilhões de reais\n", pib2);

    printf("Informe quantos pontos turísticos tem a cidade: \n");//PONTOS TURISTICOS
    scanf("%d", &pontos2);

    printf("O total de pontos turísticos é de %d\n", pontos2);

    densiPopulacao2 = ((double)populacao2 / area2); //calculando a densidade populacional.
    pibcapita2 = (pib2 *1000000000.0) / populacao2; //calculando o PIB per Capita.

    printf("Perfeito!!!\n Estas são suas cartas, mantenha elas por perto ;D\n Até a próxima!\n\n");

    //Primeira CARTA
    printf("Carta 1:\n\n");
    printf("Nome do Estado: %s\n", nomeEstado);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f\n", densiPopulacao1);
    printf("PIB per Capita: %.2f\n\n\n", pibcapita1);

    //Segunda CARTA
    printf("Carta 2:\n\n");
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densiPopulacao2);
    printf("PIB per Capita: %.2f\n", pibcapita2);

    return 0;
}
