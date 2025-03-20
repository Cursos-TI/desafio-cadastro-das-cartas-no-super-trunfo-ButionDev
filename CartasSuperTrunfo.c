//Codigo criado no VSCode, usando apenas a extenção de C/C++ recomendada

#include <stdio.h>

int main(){
    
    //Definindo variáveis da primeira carta
    char estado1[20];
    char cidade1[20];
    char codigo1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    //Definindo variáveis da segunda cidade
    char estado2[20];
    char cidade2[20];
    char codigo2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;


    printf("Super Trunfo em C\n");

    //Solicitando atributos da primeira carta

    printf("Qual é o nome do estado da primeira carta?\n");
    scanf("%s", estado1);

    printf("Qual é o nome da cidade da primeira carta?\n");
    scanf("%s", cidade1);

    printf("Qual será o codigo dessa carta?\n");
    scanf("%s", codigo1);
  
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
    printf("Estado da carta: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("População: %i de pessoas\n", populacao1);
    printf("Area: %.2fKm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %i\n", pontos_turisticos1);

    //espaço para nova solicitação de dados

    printf(" \n");
    printf(" \n");
    
    
    //Solicitando atributos da segunda carta

    printf("Qual é o estado da segunda carta?\n");
    scanf("%s", estado2);

    printf("Qual é o nome da segunda cidade?\n");
    scanf("%s", cidade2);

    printf("qual é o codigo da segunda carta?\n");
    scanf("%s", codigo2);

    printf("Qual é a população dessa cidade?\n");
    scanf("%i", &populacao2);

    printf("Qual é a área dessa cidade?\n");
    scanf("%f", &area2);

    printf("Qual é o pib dessa segunda cidade?\n");
    scanf("%f", &pib2);

    printf("Qual é a quantidade de pontos turístivos dessa segunda cidade?\n");
    scanf("%i", &pontos_turisticos2);

    //imprimindo atributos da segunda carta

    printf("Carta %s\n", cidade2);
    printf("Estado da carta: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("População: %i de pessoas\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("pontos turísticos: %i\n", pontos_turisticos2);

    //dando um espaço para poder imprimir as duas cartas juntas
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");

    //imprimindo ambas as cartas

    printf("PRIMEIRA CARTA");
    printf(" \n");
    printf("Carta %s\n", cidade1);
    printf("Estado da carta: %s\n", estado1);
    printf("Código da carta: %s\n", codigo2);
    printf("População: %i de pessoas\n", populacao1);
    printf("Area: %.2fKm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %i\n", pontos_turisticos1);

    printf(" \n");
    printf(" \n");

    printf("SEGUNDA CARTA");
    printf(" \n");
    printf("Carta: %s\n", cidade2);
    printf("Estado da carta: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("População: %i de pessoas\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("pontos turísticos: %i\n", pontos_turisticos2);


    return 0;


}