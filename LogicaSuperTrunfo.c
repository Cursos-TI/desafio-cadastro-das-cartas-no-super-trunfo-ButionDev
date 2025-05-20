#include <stdio.h>

//Realizado todos os níveis do desáfio.

int main(){
    //Nivel mestre: Variáveis para estrutura do jogo e menu
    int opcao, escolhaatributo1, escolhaatributo2, resultado1, resultado2, cartavencedora;
    
    //Definindo variáveis da primeira carta
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Aventureiro: densidade populacional e pip per capta da primeira carta
    float densisade_populacional1;
    float pib_capita1;
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
    float pib_capita2;
    // Mestre: Calculo de super poder, comparar cartas e exibir os resultados das comparações
    float superpoder2;

    printf("***Super Trunfo em C***\n");

    printf("1. Iniciar o jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do jogo\n");
    printf("Escolha a sua opção: ");
    scanf("%i", &opcao);

    //Switch para iniciar as opções escolhidas

    switch(opcao){

        case 1 :

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

    pib_capita1 = (float) pib1 / populacao1;

    printf("Densidade populacional: %.2f hab/km²\n", densisade_populacional1);
    printf("Pib per capta: %.2f reais\n", pib_capita1);

    //mestre:
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1
    + densisade_populacional1 + pib_capita1;

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

    pib_capita2 = (float) pib2 / populacao2;


    printf("Densidade populacional: %.2f hab/km²\n", densisade_populacional2);
    printf("Pib per capta: %.2f reais\n", pib_capita2);

        //mestre:
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2
    + densisade_populacional2 + pib_capita2;

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
    printf("Pib per capta: %.2f reais\n", pib_capita1);

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
    printf("Pib per capta: %.2f reais\n", pib_capita2);

    //Mestre:
    printf("Super poder carta 2: %.2f (soma de todos os pontos)\n", superpoder2);

    printf("\n");
    printf("\n");

    //Comparação das cartas e verificação da carta vencedora:

    //Verificação de nível médio, usando if, else if e else para definir a carta vencedora
    //Mestre: alem do if-else, será implementado switch para poder escolher o atributo

    printf("Qual sera o primeiro atributo da carta a ser comparado?\n");
    printf("1 - População\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - pontos turísticos\n");
    printf("5 - densidade populacional\n");
    printf("6 - pib per capta\n");
    printf("7 - super poder\n");
    printf("Escolha o atributo: ");
    scanf("%i", &escolhaatributo1);

    printf("\n");

    switch (escolhaatributo1){

    case 1:
    //Verificando população
    printf("***Verificando a carta vencedora***\n");
    printf("\n");
    if (populacao1 > populacao2){
        printf("A carta %s é a vencedora em população\n", cidade1);
    }else if (populacao2 > populacao1) {
        printf("a carta %s é a vencedora em população\n", cidade2);
    }else {
        printf("Houve um empate em população\n");
    }
    resultado1 = populacao1 > populacao2 ? 1 : 0; 
    break;

    case 2:
    //Verificando área
        if (area1 > area2){
        printf("A carta %s é a vencedora em area\n", cidade1);
    }else if (area2 > area1) {
        printf("a carta %s é a vencedora em área\n", cidade2);
    }else {
        printf("Houve um empate em área\n");
    }
    resultado1 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    //Verificando pib
        if (pib1 > pib2){
        printf("A carta %s é a vencedora em pib\n", cidade1);
    }else if (pib2 > pib1) {
        printf("a carta %s é a vencedora em pib\n", cidade2);
    }else {
        printf("Houve um empate em pib\n");
    }
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;

    case 4:
    //Verificando pontos turísticos
        if (pontos_turisticos1 > pontos_turisticos2){
        printf("A carta %s é a vencedora em pontos turísticos\n", cidade1);
    }else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("a carta %s é a vencedora em pontos turísticos\n", cidade2);
    }else {
        printf("Houve um empate em pontos turísticos\n");
    }
    resultado1 = pontos_turisticos1 > pontos_turisticos2;
    break;

    case 5:
    //Verificando densidade populacional
        if (densisade_populacional1 < densisade_populacional2){
        printf("A carta %s é a vencedora em densidade populacional\n", cidade1);
    }else if (densisade_populacional2 < densisade_populacional1) {
        printf("a carta %s é a vencedora em densidade populacional\n", cidade2);
    }else {
        printf("Houve um empate densidade populacional\n");
    }
    resultado1 = densisade_populacional1 < densisade_populacional2 ? 1 : 0;
    break;

    case 6:
    //Verificando pib per capta
        if (pib_capita1 > pib_capita2){
        printf("A carta %s é a vencedora em pib per capta\n", cidade1);
    }else if (pib_capita2 > pib_capita1) {
        printf("a carta %s é a vencedora em pib per capta\n", cidade2);
    }else {
        printf("Houve um empate em pib per capta\n");
    }
    resultado1 = pib_capita1 > pib_capita2 ? 1 : 0;
    break;

    case 7:
    //Verificando super poder
        if (superpoder1 > superpoder2){
        printf("A carta %s é a vencedora em Super poder\n", cidade1);
    }else if (superpoder2 > superpoder1) {
        printf("a carta %s é a vencedora em área\n", cidade2);
    }else {
        printf("Houve um empate em Super poder\n");
    }
    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
    break;

    // caso opção inválida:
    default:
        printf("Opção inválida\n");
    break;

    }

    printf("\n");
    printf("Qual sera o segundo atributo da carta a ser comparado?\n");
    printf("***Não escolha o mesmo atributo que escolheu antes***\n");
    printf("1 - População\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - pontos turísticos\n");
    printf("5 - densidade populacional\n");
    printf("6 - pib per capta\n");
    printf("7 - super poder\n");
    printf("Escolha o atributo: ");
    scanf("%i", &escolhaatributo2);
    printf("\n");

    if (escolhaatributo1 == escolhaatributo2){
        printf("O atributo não pode ser o mesmo da primeira carta\n");
    } else {

    switch (escolhaatributo2){

    case 1:
    //Verificando população
    printf("***Verificando a carta vencedora***\n");
    if (populacao1 > populacao2){
        printf("A carta %s é a vencedora em população\n", cidade1);
    }else if (populacao2 > populacao1) {
        printf("a carta %s é a vencedora em população\n", cidade2);
    }else {
        printf("Houve um empate em população\n");
    }
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;

    case 2:
    //Verificando área
        if (area1 > area2){
        printf("A carta %s é a vencedora em area\n", cidade1);
    }else if (area2 > area1) {
        printf("a carta %s é a vencedora em área\n", cidade2);
    }else {
        printf("Houve um empate em área\n");
    }
    resultado2 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    //Verificando pib
        if (pib1 > pib2){
        printf("A carta %s é a vencedora em pib\n", cidade1);
    }else if (pib2 > pib1) {
        printf("a carta %s é a vencedora em pib\n", cidade2);
    }else {
        printf("Houve um empate em pib\n");
    }
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;

    case 4:
    //Verificando pontos turísticos
        if (pontos_turisticos1 > pontos_turisticos2){
        printf("A carta %s é a vencedora em pontos turísticos\n", cidade1);
    }else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("a carta %s é a vencedora em pontos turísticos\n", cidade2);
    }else {
        printf("Houve um empate em pontos turísticos\n");
    }
    resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    break;

    case 5:
    //Verificando densidade populacional
        if (densisade_populacional1 < densisade_populacional2){
        printf("A carta %s é a vencedora em densidade populacional\n", cidade1);
    }else if (densisade_populacional2 < densisade_populacional1) {
        printf("a carta %s é a vencedora em densidade populacional\n", cidade2);
    }else {
        printf("Houve um empate densidade populacional\n");
    }
    resultado2 = densisade_populacional1 < densisade_populacional2 ? 1 : 0;
    break;

    case 6:
    //Verificando pib per capta
        if (pib_capita1 > pib_capita2){
        printf("A carta %s é a vencedora em pib per capta\n", cidade1);
    }else if (pib_capita2 > pib_capita1) {
        printf("a carta %s é a vencedora em pib per capta\n", cidade2);
    }else {
        printf("Houve um empate em pib per capta\n");
    }
    resultado2 = pib_capita1 > pib_capita2 ? 1 : 0;
    break;

    case 7:
    //Verificando super poder
        if (superpoder1 > superpoder2){
        printf("A carta %s é a vencedora em Super poder\n", cidade1);
    }else if (superpoder2 > superpoder1) {
        printf("a carta %s é a vencedora em área\n", cidade2);
    }else {
        printf("Houve um empate em Super poder\n");
    }
    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
    break;

    // caso opção inválida:
    default:
        printf("Opção inválida\n");
    break;

    }

    printf("\n");

    //Logica de qual será a carta vencedora:
    if ((resultado1 == 1 ) && (resultado2 == 1)){
        printf("A carta: %s venceu\n", cidade1);
    }else if (resultado1 != resultado2){
        printf("As cartas empataram\n");
    }else {
        printf("A carta: %s venceu\n", cidade2);
    }

    }
    
    break;
    
    //Regras do jogo:
    case 2:
    printf("No jogo você deve definir atributos para cada uma das cartas e no final\n");
    printf("você deve escolher algum atributo da carta para poder definir qual sera\n");
    printf("a carta vencedora.\n");
    break;

    case 3:
    printf("Saindo do jogo...\n");
    break;

    default:
    printf("Opção inválida\n");
    break;
    }

    return 0;
}