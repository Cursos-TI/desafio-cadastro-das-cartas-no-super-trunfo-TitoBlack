#include <stdio.h>

int main() {
    char nomeEstado [20], nomeEstado2 [20]; //Nome do estado.
    char estado, estado2;//Letra representando um dos estados.
    char codigoCarta [4], codigoCarta2 [4]; //Código da carta.
    char cidade [15], cidade2 [15]; //Nome da cidade.
    unsigned long int populacao, populacao2; //Número de habitantes da cidade.
    float area, area2; //Quilômetros quadrados da cidade.
    float pib, pib2; //Produto interno e bruto da cidade.
    int pontos, pontos2; //Quantidade de ponto turistico.
    float densiPopulacao1, densiPopulacao2; //Densidade Populacional = População / área da cidade.
    float pibcapita1, pibcapita2; //PIB per Capita = PIB / população.
    float superPoder1, superPoder2; //Super poder = População + área + pib + pib per capita + densidade populacional invertida + pontos turisticos.

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
    scanf("%f", &area);

    printf("A área total é de %.2f km²\n", area);

    printf("Informe o produto interno bruto da cidade: \n");//PIB
    scanf("%f", &pib);

    printf("O PIB é de %.2f bilhões de reais\n", pib);

    printf("Informe quantos pontos turísticos tem a cidade: \n");//PONTOS TURISTICOS
    scanf("%d", &pontos);

    printf("O total de pontos turísticos é de %d\n\n", pontos);

    densiPopulacao1 = (populacao / area); //calculando a densidade populacional.
    pibcapita1 = (pib *1000000000.0) / populacao; //calculando o PIB per Capita.

    superPoder1 = (populacao + area + pib + pontos + pibcapita1 + (1.0 / densiPopulacao1));//calcula o super poder.

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
    scanf("%f", &area2);

    printf("A área total é de %.2f km²\n", area2);

    printf("Informe o produto interno bruto da cidade: \n");//PIB
    scanf("%f", &pib2);

    printf("O PIB é de %.2f bilhões de reais\n", pib2);

    printf("Informe quantos pontos turísticos tem a cidade: \n");//PONTOS TURISTICOS
    scanf("%d", &pontos2);

    printf("O total de pontos turísticos é de %d\n\n", pontos2);

    densiPopulacao2 = (populacao2 / area2); //calculando a densidade populacional.
    pibcapita2 = (pib2 *1000000000.0) / populacao2; //calculando o PIB per Capita.

    superPoder2 = (populacao2 + area2 + pib2 + pontos2 + pibcapita2 + (1.0 / densiPopulacao2));//calcula o super poder.

    printf("Perfeito!!!\n\n Estas são suas cartas, mantenha elas por perto ;D\n Veja a comparação entre elas!\n\n");

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
    printf("PIB per Capita: %.2f\n", pibcapita1);
    printf("Super Poder: %.2f\n", superPoder1);

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
    printf("Super Poder: %.2f\n\n", superPoder2);

    //Comparando as CARTAS
    printf("***COMPARAÇÃO DAS CARTAS***\n\n");

    //Se a população da carta 2 for maior que a da carta 1 vai dar 0, então ele soma com 1 para definir a carta como 1. 
    printf("População: Carta %d venceu (%d)\n", 1 + (populacao2 > populacao), populacao > populacao2);
    printf("Área: Carta %d venceu (%d)\n", 1 + (area2 > area), area > area2);
    printf("PIB: Carta %d venceu (%d)\n", 1 + (pib2 > pib), pib > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 1 + (pontos2 > pontos), pontos > pontos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 1 + (densiPopulacao1 > densiPopulacao2), densiPopulacao1 < densiPopulacao2);//A carta que ficar com a menor densidade populacional ganha.
    printf("PIB per Capita: Carta %d venceu (%d)\n", 1 + (pibcapita2 > pibcapita1), pibcapita1 > pibcapita2);
    printf("Super Poder: Carta %d venceu (%d)\n\n", 1 + (superPoder2 > superPoder1), superPoder1 > superPoder2);


    return 0;
}
