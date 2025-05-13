#include <stdio.h>

//Realizado todos os níveis do desáfio.

int main(){

    
    //Definindo variáveis da primeira carta
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Aventureiro: densidade populacional e pip per capta da primeira carta
    float densisade_populacional1;
    float pib_capta1;
    // Mestre: Calculo de super poder, comparar cartas e exibir os resultados das comparações
    float superpoder1;
    
    //Definindo variáveis da segunda cidade
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Aventureiro: densidade populacional e pib per capta da segunda carta
    float densisade_populacional2;
    float pib_capta2;
    // Mestre: Calculo de super poder, comparar cartas e exibir os resultados das comparações
    float superpoder2;

    printf("Super Trunfo em C\n");

    //Solicitando atributos da primeira carta

    printf("Qual é o nome da cidade da primeira carta?\n");
    scanf("%s", cidade1);

  
    printf("Qual é a população dessa cidade?\n");
    scanf("%i", &populacao1);

    printf("Qual é a área dessa cidade?\n");
    scanf("%f", &area1);

    printf("Qual é o PIB dessa cidade?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos essa cidade tem?\n");
    scanf("%i", &pontos_turisticos1);

    //imprimindo atributos da primeira carta;

    printf("Carta %s\n", cidade1);
    printf("População: %i de pessoas\n", populacao1);
    printf("Area: %.2fKm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %i\n", pontos_turisticos1);

    //Aventureiro:
    densisade_populacional1 = (float) populacao1 / area1;

    pib_capta1 = (float) pib1 / populacao1;

    printf("Densidade populacional: %.2f hab/km²\n", densisade_populacional1);
    printf("Pib per capta: %.2f reais\n", pib_capta1);

    //mestre:
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1
    + densisade_populacional1 + pib_capta1;

    printf("Super poder carta 1: %.2f (soma de todos os pontos)\n", superpoder1);

    //espaço para nova solicitação de dados

    printf(" \n");
    printf(" \n");
    
    
    //Solicitando atributos da segunda carta

    printf("Qual é o nome da segunda cidade?\n");
    scanf("%s", cidade2);

    printf("Qual é a população dessa cidade?\n");
    scanf("%i", &populacao2);

    printf("Qual é a área dessa cidade?\n");
    scanf("%f", &area2);

    printf("Qual é o pib dessa segunda cidade?\n");
    scanf("%f", &pib2);

    printf("Qual é a quantidade de pontos turístivos dessa segunda cidade?\n");
    scanf("%i", &pontos_turisticos2);

    //Aventureiro:
    densisade_populacional2 = (float) populacao2 / area2;

    pib_capta2 = (float) pib2 / populacao2;


    printf("Densidade populacional: %.2f hab/km²\n", densisade_populacional2);
    printf("Pib per capta: %.2f reais\n", pib_capta2);

        //mestre:
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2
    + densisade_populacional2 + pib_capta2;

    printf("Super poder carta 2: %.2f (soma de todos os pontos)\n", superpoder2);

    //imprimindo atributos da segunda carta

    printf("Carta %s\n", cidade2);
    printf("População: %i de pessoas\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("pontos turísticos: %i\n", pontos_turisticos2);
    printf("Super poder carta 2: %.2f (soma de todos os pontos)\n", superpoder2);

    //dando um espaço para poder imprimir as duas cartas juntas
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");

    //imprimindo ambas as cartas

    printf("PRIMEIRA CARTA");
    printf(" \n");
    printf("Carta %s\n", cidade1);
    printf("População: %i de pessoas\n", populacao1);
    printf("Area: %.2fKm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %i\n", pontos_turisticos1);

        //Aventureiro
    printf("Densidade populacional: %.2f hab/km²\n", densisade_populacional1);
    printf("Pib per capta: %.2f reais\n", pib_capta1);

        //Mestre
    printf("Super poder carta 1: %.2f (soma de todos os pontos)\n", superpoder1);

    printf(" \n");
    printf(" \n");

    printf("SEGUNDA CARTA");
    printf(" \n");
    printf("Carta: %s\n", cidade2);
    printf("População: %i de pessoas\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("pontos turísticos: %i\n", pontos_turisticos2);

    //Aventureiro:
    printf("Densidade populacional: %.2f hab/km²\n", densisade_populacional2);
    printf("Pib per capta: %.2f reais\n", pib_capta2);

    //Mestre:
    printf("Super poder carta 2: %.2f (soma de todos os pontos)\n", superpoder2);

    printf("\n");
    printf("\n");

    //Comparação das cartas e verificação da carta vencedora:

    printf("Verificando qual é a carta vencedora, (1 = carta 1 venceu, 0 = carta 2 venceu)\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("Pib: %d\n", pib1 > pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade populacional: %d\n", densisade_populacional1 > densisade_populacional2);
    printf("Pib per capta: %d\n", pib_capta1 > pib_capta2);
    printf("Super poder: %d\n", superpoder1 > superpoder2);


    return 0;
}