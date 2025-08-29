/*
* Objetivo: Criar um programa em C que permita o usuário inserir 
* os dados de duas cartas do Super Trunfo.
* Disciplina: Introdução à Programação de Computadores
*/

#include <stdio.h>
#include <string.h>

int main(){
    
    // --- Variáveis da Carta 1 ---
    char estado_c1;
    char codigo_Cartas_c1[20];
    char nome_Cidade_c1[50];
    int populacao_c1;
    float area_km_quadrado_c1;
    float pib_c1;
    int pontos_turisticos_c1;

    // --- Variáveis da Carta 2 ---
    char estado_c2;
    char codigo_Cartas_c2[20];
    char nome_Cidade_c2[50];
    int populacao_c2;
    float area_km_quadrado_c2;
    float pib_c2;
    int pontos_turisticos_c2; 

    // --- Entrada de Dados da Carta 1 ---
    printf("Dados da Carta 1: \n");

    printf("Digite uma letra entre A e H (representa um dos oito estados): ");
    scanf(" %c", &estado_c1);
    
    printf("Digite o código da carta. (Letra do estado seguido de 01 a 04): ");
    scanf("%s", codigo_Cartas_c1);

    getchar(); // Consome o '\n' deixado no buffer pelo scanf anterior para evitar problemas na leitura do fgets.
    
    printf("Digite o nome da cidade: ");
    fgets(nome_Cidade_c1, 50, stdin);
    nome_Cidade_c1[strcspn(nome_Cidade_c1, "\n")] = 0; // fgets inclui o '\n' na string. Esta linha o localiza e o substitui por um terminador nulo ('\0') para "limpar" a string.
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao_c1);
    
    printf("Digite a área (em km ao quadrado): ");
    scanf("%f", &area_km_quadrado_c1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_c1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_c1);

    // --- Entrada de Dados da Carta 2 ---
    printf("\nDados da Carta 2: \n");

    printf("Digite uma letra entre A e H (representa um dos oito estados): ");
    scanf(" %c", &estado_c2);
    
    printf("Digite o código da carta. (Letra do estado seguido de 01 a 04): ");
    scanf("%s", codigo_Cartas_c2);

    getchar(); // Consome o '\n' deixado no buffer pelo scanf anterior para evitar problemas na leitura do fgets.
    
    printf("Digite o nome da cidade: ");
    fgets(nome_Cidade_c2, 50, stdin);
    nome_Cidade_c2[strcspn(nome_Cidade_c2, "\n")] = 0; // fgets inclui o '\n' na string. Esta linha o localiza e o substitui por um terminador nulo ('\0') para "limpar" a string.
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao_c2);
    
    printf("Digite a área (em km ao quadrado): ");
    scanf("%f", &area_km_quadrado_c2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_c2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_c2);

    // Imprimindo as Cartas 1 e 2
    // --- Carta 1 ---
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado_c1);
    printf("Código: %s\n", codigo_Cartas_c1);
    printf("Nome da Cidade: %s\n", nome_Cidade_c1);
    printf("População: %d\n", populacao_c1);
    printf("Área: %.2f km²\n", area_km_quadrado_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_c1); 

    // --- Carta 2 ---
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado_c2);
    printf("Código: %s\n", codigo_Cartas_c2);
    printf("Nome da Cidade: %s\n", nome_Cidade_c2);
    printf("População: %d\n", populacao_c2);
    printf("Área: %.2f km²\n", area_km_quadrado_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_c2);

    return 0;
}