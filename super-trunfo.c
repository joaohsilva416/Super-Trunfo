/*
* Objetivo: Criar um programa em C que permita o usuário inserir 
* os dados de duas cartas do Super Trunfo e comparar dois atributos.
* Disciplina: Introdução à Programação de Computadores
* Desafio: Nível Mestre
*/

#include <stdio.h>
#include <string.h> // Para strcpy

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

    // --- Variáveis para o controle dos atributos (Desafio Mestre) ---
    int opcao1, opcao2;
    float val_comp_a1_c1, val_comp_a1_c2, val_soma_a1_c1, val_soma_a1_c2;
    float val_comp_a2_c1, val_comp_a2_c2, val_soma_a2_c1, val_soma_a2_c2;
    float soma_c1, soma_c2;
    char nome_attr1[50], nome_attr2[50];
    

    // --- Entrada de Dados da Carta 1 ---
    printf("Dados da Carta 1: \n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_c1);
    
    printf("Digite o código da carta. (Letra do estado seguido de 01 a 04): ");
    scanf("%s", codigo_Cartas_c1);

    getchar(); // Consome o '\n' deixado no buffer pelo scanf anterior
    
    printf("Digite o nome da cidade: ");
    fgets(nome_Cidade_c1, 50, stdin);
    nome_Cidade_c1[strcspn(nome_Cidade_c1, "\n")] = 0; 
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao_c1);
    
    printf("Digite a área (em km ao quadrado): ");
    scanf("%f", &area_km_quadrado_c1);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_c1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_c1);

    // --- Entrada de Dados da Carta 2 ---
    printf("\nDados da Carta 2: \n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_c2);
    
    printf("Digite o código da carta. (Letra do estado seguido de 01 a 04): ");
    scanf("%s", codigo_Cartas_c2);

    getchar(); // Consome o '\n' deixado no buffer pelo scanf anterior
    
    printf("Digite o nome da cidade: ");
    fgets(nome_Cidade_c2, 50, stdin);
    nome_Cidade_c2[strcspn(nome_Cidade_c2, "\n")] = 0; 
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao_c2);
    
    printf("Digite a área (em km ao quadrado): ");
    scanf("%f", &area_km_quadrado_c2);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_c2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_c2);

    // --- Bloco de Cálculos
    // --- Cálculo da Carta 1
    densidade_populacional_c1 = (float)populacao_c1 / area_km_quadrado_c1;
    pib_per_capita_c1 = (pib_c1 * 1000000000) / (float)populacao_c1;
    inverso_densidade_populacional_c1 = area_km_quadrado_c1 / (float)populacao_c1;
    super_Poder_c1 = (float)populacao_c1 + area_km_quadrado_c1 + pib_per_capita_c1 + inverso_densidade_populacional_c1;

    // --- Cálculo da carta 2
    densidade_populacional_c2 = (float)populacao_c2 / area_km_quadrado_c2;
    pib_per_capita_c2 = (pib_c2 * 1000000000) / (float)populacao_c2;
    inverso_densidade_populacional_c2 = area_km_quadrado_c2 / (float)populacao_c2;
    super_Poder_c2 = (float)populacao_c2 + area_km_quadrado_c2 + pib_per_capita_c2 + inverso_densidade_populacional_c2;

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

    // --- Início do Desafio Mestre: Comparação Avançada ---

    // Menu 1: Escolha do primeiro atributo
    printf("\n*** Escolha do Primeiro Atributo ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    // Menu 2: Menu "Dinâmico" (sem loops)
    printf("\n*** Escolha do Segundo Atributo (diferente de %d) ***\n", opcao1);
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Números de pontos turisticos\n");
    if (opcao1 != 5) printf("5. Densidade demográfica\n");
    if (opcao1 != 6) printf("6. PIB per Capita\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &opcao2);

    // Validação das entradas
    if (opcao1 == opcao2) {
        printf("Erro: Você escolheu o mesmo atributo duas vezes. Encerrando.\n");
        return 1; // Encerra o programa com código de erro
    }

    if (opcao1 < 1 || opcao1 > 6 || opcao2 < 1 || opcao2 > 6) {
        printf("Erro: Opção de atributo inválida. Encerrando.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Processamento do Atributo 1
    // Define os valores para COMPARAÇÃO (val_comp) e para SOMA (val_soma)
    switch (opcao1) {
        case 1: // População
            val_comp_a1_c1 = (float)populacao_c1;
            val_comp_a1_c2 = (float)populacao_c2;
            val_soma_a1_c1 = (float)populacao_c1;
            val_soma_a1_c2 = (float)populacao_c2;
            strcpy(nome_attr1, "População");
            break;
        case 2: // Área
            val_comp_a1_c1 = area_km_quadrado_c1;
            val_comp_a1_c2 = area_km_quadrado_c2;
            val_soma_a1_c1 = area_km_quadrado_c1;
            val_soma_a1_c2 = area_km_quadrado_c2;
            strcpy(nome_attr1, "Área");
            break;
        case 3: // PIB
            val_comp_a1_c1 = pib_c1;
            val_comp_a1_c2 = pib_c2;
            val_soma_a1_c1 = pib_c1;
            val_soma_a1_c2 = pib_c2;
            strcpy(nome_attr1, "PIB");
            break;
        case 4: // Pontos Turísticos
            val_comp_a1_c1 = (float)pontos_turisticos_c1;
            val_comp_a1_c2 = (float)pontos_turisticos_c2;
            val_soma_a1_c1 = (float)pontos_turisticos_c1;
            val_soma_a1_c2 = (float)pontos_turisticos_c2;
            strcpy(nome_attr1, "Pontos Turísticos");
            break;
        case 5: // Densidade Demográfica (Regra especial)
            val_comp_a1_c1 = densidade_populacional_c1; // Para comparar, usamos o valor direto
            val_comp_a1_c2 = densidade_populacional_c2;
            val_soma_a1_c1 = inverso_densidade_populacional_c1; // Para somar, usamos o inverso
            val_soma_a1_c2 = inverso_densidade_populacional_c2;
            strcpy(nome_attr1, "Densidade Demográfica");
            break;
        case 6: // PIB per Capita
            val_comp_a1_c1 = pib_per_capita_c1;
            val_comp_a1_c2 = pib_per_capita_c2;
            val_soma_a1_c1 = pib_per_capita_c1;
            val_soma_a1_c2 = pib_per_capita_c2;
            strcpy(nome_attr1, "PIB per Capita");
            break;
        // O default é desnecessário devido à validação anterior
    }

    // Processamento do Atributo 2
    // Define os valores para COMPARAÇÃO (val_comp) e para SOMA (val_soma)
    switch (opcao2) {
        case 1: // População
            val_comp_a2_c1 = (float)populacao_c1;
            val_comp_a2_c2 = (float)populacao_c2;
            val_soma_a2_c1 = (float)populacao_c1;
            val_soma_a2_c2 = (float)populacao_c2;
            strcpy(nome_attr2, "População");
            break;
        case 2: // Área
            val_comp_a2_c1 = area_km_quadrado_c1;
            val_comp_a2_c2 = area_km_quadrado_c2;
            val_soma_a2_c1 = area_km_quadrado_c1;
            val_soma_a2_c2 = area_km_quadrado_c2;
            strcpy(nome_attr2, "Área");
            break;
        case 3: // PIB
            val_comp_a2_c1 = pib_c1;
            val_comp_a2_c2 = pib_c2;
            val_soma_a2_c1 = pib_c1;
            val_soma_a2_c2 = pib_c2;
            strcpy(nome_attr2, "PIB");
            break;
        case 4: // Pontos Turísticos
            val_comp_a2_c1 = (float)pontos_turisticos_c1;
            val_comp_a2_c2 = (float)pontos_turisticos_c2;
            val_soma_a2_c1 = (float)pontos_turisticos_c1;
            val_soma_a2_c2 = (float)pontos_turisticos_c2;
            strcpy(nome_attr2, "Pontos Turísticos");
            break;
        case 5: // Densidade Demográfica (Regra especial)
            val_comp_a2_c1 = densidade_populacional_c1; // Para comparar, usamos o valor direto
            val_comp_a2_c2 = densidade_populacional_c2;
            val_soma_a2_c1 = inverso_densidade_populacional_c1; // Para somar, usamos o inverso
            val_soma_a2_c2 = inverso_densidade_populacional_c2;
            strcpy(nome_attr2, "Densidade Demográfica");
            break;
        case 6: // PIB per Capita
            val_comp_a2_c1 = pib_per_capita_c1;
            val_comp_a2_c2 = pib_per_capita_c2;
            val_soma_a2_c1 = pib_per_capita_c1;
            val_soma_a2_c2 = pib_per_capita_c2;
            strcpy(nome_attr2, "PIB per Capita");
            break;
    }

    // Cálculo da Soma Total
    soma_c1 = val_soma_a1_c1 + val_soma_a2_c1;
    soma_c2 = val_soma_a1_c2 + val_soma_a2_c2;

    // Exibição Clara dos Resultados
    printf("\n*** Resultado da Comparação ***\n");
    printf("Cidades: %s vs %s\n", nome_Cidade_c1, nome_Cidade_c2);

    // Comparação individual do Atributo 1 (usando operador ternário)
    printf("\n--- Comparação: %s ---\n", nome_attr1);
    printf("Valores: %.2f vs %.2f\n", val_comp_a1_c1, val_comp_a1_c2);
    printf("Vencedor: %s\n",
        (opcao1 == 5) // É densidade? (Menor vence)
            ? (val_comp_a1_c1 < val_comp_a1_c2 ? nome_Cidade_c1 : (val_comp_a1_c2 < val_comp_a1_c1 ? nome_Cidade_c2 : "Empate"))
            : (val_comp_a1_c1 > val_comp_a1_c2 ? nome_Cidade_c1 : (val_comp_a1_c2 > val_comp_a1_c1 ? nome_Cidade_c2 : "Empate"))
    );

    // Comparação individual do Atributo 2 (usando operador ternário)
    printf("\n--- Comparação: %s ---\n", nome_attr2);
    printf("Valores: %.2f vs %.2f\n", val_comp_a2_c1, val_comp_a2_c2);
    printf("Vencedor: %s\n",
        (opcao2 == 5) // É densidade? (Menor vence)
            ? (val_comp_a2_c1 < val_comp_a2_c2 ? nome_Cidade_c1 : (val_comp_a2_c2 < val_comp_a2_c1 ? nome_Cidade_c2 : "Empate"))
            : (val_comp_a2_c1 > val_comp_a2_c2 ? nome_Cidade_c1 : (val_comp_a2_c2 > val_comp_a2_c1 ? nome_Cidade_c2 : "Empate"))
    );

    // Resultado Final baseado na Soma
    printf("\n--- Resultado Final (Soma dos Atributos) ---\n");
    printf("Soma %s (%s + %s): %.2f\n", nome_Cidade_c1, nome_attr1, nome_attr2, soma_c1);
    printf("Soma %s (%s + %s): %.2f\n", nome_Cidade_c2, nome_attr1, nome_attr2, soma_c2);

    if (soma_c1 > soma_c2) {
        printf("Vencedor Final: %s\n", nome_Cidade_c1);
    } else if (soma_c2 > soma_c1) {
        printf("Vencedor Final: %s\n", nome_Cidade_c2);
    } else {
        printf("Vencedor Final: Empate!\n");
    }

    return 0;
}