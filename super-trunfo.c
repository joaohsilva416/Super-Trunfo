/*
* Objetivo: Criar um programa em C que permita o usuário inserir 
* os dados de duas cartas do Super Trunfo.
* Disciplina: Introdução à Programação de Computadores
*/

#include <stdio.h>
#include <string.h>

int main(){
    
    // --- Variáveis da Cartas ---
    char estado_c1, estado_c2;
    char codigo_Cartas_c1[20], codigo_Cartas_c2[20];
    char nome_Cidade_c1[50], nome_Cidade_c2[50];
    unsigned long int populacao_c1, populacao_c2;
    float area_km_quadrado_c1, area_km_quadrado_c2;
    float pib_c1, pib_c2;
    int pontos_turisticos_c1, pontos_turisticos_c2;
    float densidade_populacional_c1, densidade_populacional_c2;
    float pib_per_capita_c1, pib_per_capita_c2;
    float inverso_densidade_populacional_c1, inverso_densidade_populacional_c2;
    float super_Poder_c1, super_Poder_c2;

    // -- Váriavel de controle do menu interativo --
    int opcao;

    // --- Entrada de Dados da Carta 1 ---
    printf("Dados da Carta 1: \n");

    printf("Digite a letra do estado: ");
    scanf(" %s", &estado_c1);
    
    printf("Digite o código da carta. (Letra do estado seguido de 01 a 04): ");
    scanf("%s", codigo_Cartas_c1);

    getchar(); // Consome o '\n' deixado no buffer pelo scanf anterior para evitar problemas na leitura do fgets.
    
    printf("Digite o nome da cidade: ");
    fgets(nome_Cidade_c1, 50, stdin);
    nome_Cidade_c1[strcspn(nome_Cidade_c1, "\n")] = 0; // fgets inclui o '\n' na string. Esta linha o localiza e o substitui por um terminador nulo ('\0') para "limpar" a string.
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao_c1);
    
    printf("Digite a área (em km ao quadrado): ");
    scanf("%f", &area_km_quadrado_c1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_c1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_c1);

    // --- Entrada de Dados da Carta 2 ---
    printf("\nDados da Carta 2: \n");

    printf("Digite a letra do estado: ");
    scanf(" %s", &estado_c2);
    
    printf("Digite o código da carta. (Letra do estado seguido de 01 a 04): ");
    scanf("%s", codigo_Cartas_c2);

    getchar(); // Consome o '\n' deixado no buffer pelo scanf anterior para evitar problemas na leitura do fgets.
    
    printf("Digite o nome da cidade: ");
    fgets(nome_Cidade_c2, 50, stdin);
    nome_Cidade_c2[strcspn(nome_Cidade_c2, "\n")] = 0; // fgets inclui o '\n' na string. Esta linha o localiza e o substitui por um terminador nulo ('\0') para "limpar" a string.
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao_c2);
    
    printf("Digite a área (em km ao quadrado): ");
    scanf("%f", &area_km_quadrado_c2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_c2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_c2);

    // --- Bloco de Cálculos
    // --- Cálculo da Carta 1
    densidade_populacional_c1 = (float)populacao_c1 / area_km_quadrado_c1;
    pib_per_capita_c1 = (pib_c1 * 1000000000) / (float)populacao_c1;
    inverso_densidade_populacional_c1 = area_km_quadrado_c1 / populacao_c1;
    super_Poder_c1 = populacao_c1 + area_km_quadrado_c1 + pib_per_capita_c1 + inverso_densidade_populacional_c1;

    // --- Cálculo da carta 2
    densidade_populacional_c2 = (float)populacao_c2 / area_km_quadrado_c2;
    pib_per_capita_c2 = (pib_c2 * 1000000000) / (float)populacao_c2;
    inverso_densidade_populacional_c2 = area_km_quadrado_c2 / populacao_c2;
    super_Poder_c2 = populacao_c2 + area_km_quadrado_c2 + pib_per_capita_c2 + inverso_densidade_populacional_c2;

    // Imprimindo as Cartas 1 e 2
    // --- Carta 1 ---
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado_c1);
    printf("Código: %s\n", codigo_Cartas_c1);
    printf("Nome da Cidade: %s\n", nome_Cidade_c1);
    printf("População: %lu\n", populacao_c1);
    printf("Área: %.2f km²\n", area_km_quadrado_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_c1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_c1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c1);
    printf("Super Poder: %.2f", super_Poder_c1);

    printf("\n"); // Pular linha

    // --- Carta 2 ---
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado_c2);
    printf("Código: %s\n", codigo_Cartas_c2);
    printf("Nome da Cidade: %s\n", nome_Cidade_c2);
    printf("População: %lu\n", populacao_c2);
    printf("Área: %.2f km²\n", area_km_quadrado_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_c2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_c2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c2);
    printf("Super Poder: %.2f\n", super_Poder_c2);

    // Menu interativo
    printf("\n*** Comparação de Atributos ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao_c1 > populacao_c2)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: População\n");
            printf("Valor do atributo: %lu vs %lu\n", populacao_c1, populacao_c2);
            printf("Carta 1 venceu\n");
        } else if (populacao_c2 > populacao_c1)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: População\n");
            printf("Valor do atributo: %lu vs %lu\n", populacao_c1, populacao_c2);
            printf("Carta 2 venceu\n");
        } else
         {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: População\n");
            printf("Valor do atributo: %lu vs %lu\n", populacao_c1, populacao_c2);
            printf("Empate!");
        }
        break;
    case 2:
        if (area_km_quadrado_c1 > area_km_quadrado_c2)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Área\n");
            printf("Valor do atributo: %f vs %f\n", area_km_quadrado_c1, area_km_quadrado_c2);
            printf("Carta 1 venceu");
        } else if (area_km_quadrado_c2 > area_km_quadrado_c1)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Área\n");
            printf("Valor do atributo: %f vs %f\n", area_km_quadrado_c1, area_km_quadrado_c2);
            printf("Carta 2 venceu");
        } else
         {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Área\n");
            printf("Valor do atributo: %f vs %f\n", area_km_quadrado_c1, area_km_quadrado_c2);
            printf("Empate!");
        }
        break;
    case 3:
        if (pib_c1 > pib_c2)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: PIB\n");
            printf("Valor do atributo: %f vs %f\n", pib_c1, pib_c2);
            printf("Carta 1 venceu");
        } else if (pib_c2 > pib_c1)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: PIB\n");
            printf("Valor do atributo: %f vs %f\n", pib_c1, pib_c2);
            printf("Carta 2 venceu");
        } else
         {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: PIB\n");
            printf("Valor do atributo: %f vs %f\n", area_km_quadrado_c1, area_km_quadrado_c2);
            printf("Empate!");
        }
        break;
    case 4:
        if (pontos_turisticos_c1 > pontos_turisticos_c2)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Pontos turísticos\n");
            printf("Valor do atributo: %d vs %d\n", pontos_turisticos_c1, pontos_turisticos_c2);
            printf("Carta 1 venceu");
        } else if (pontos_turisticos_c2 > pontos_turisticos_c1)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Pontos turísticos\n");
            printf("Valor do atributo: %d vs %d\n", pontos_turisticos_c1, pontos_turisticos_c2);
            printf("Carta 2 venceu");
        } else
         {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Pontos turísticos\n");
            printf("Valor do atributo: %d vs %d\n", pontos_turisticos_c1, pontos_turisticos_c2);
            printf("Empate!");
        }
        break;
    case 5:
        if (densidade_populacional_c1 < densidade_populacional_c2)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Pontos turísticos\n");
            printf("Valor do atributo: %f vs %f\n", densidade_populacional_c1, densidade_populacional_c2);
            printf("Carta 1 venceu");
        } else if (densidade_populacional_c2 < densidade_populacional_c1)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Pontos turísticos\n");
            printf("Valor do atributo: %f vs %f\n", densidade_populacional_c1, densidade_populacional_c2);
            printf("Carta 2 venceu");
        } else
         {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: Pontos turísticos\n");
            printf("Valor do atributo: %f vs %f\n", densidade_populacional_c1, densidade_populacional_c2);
            printf("Empate!");
        }
        break;
    case 6:
        if (pib_per_capita_c1 > pib_per_capita_c2)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: PIB per Capita\n");
            printf("Valor do atributo: %f vs %f\n", pib_per_capita_c1, pib_per_capita_c2);
            printf("Carta 1 venceu");
        } else if (pib_per_capita_c2 > pib_per_capita_c1)
        {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: PIB per Capita\n");
            printf("Valor do atributo: %f vs %f\n", pib_per_capita_c1, pib_per_capita_c2);
            printf("Carta 2 venceu");
        } else
         {
            printf("Cidade: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);
            printf("Atributo: PIB per Capita\n");
            printf("Valor do atributo: %f vs %f\n", pib_per_capita_c1, pib_per_capita_c2);
            printf("Empate!");
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}