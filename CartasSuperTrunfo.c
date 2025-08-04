#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída de dados (permite usar printf e scanf)

int main() { // Início da execução do programa
    char estado1[3]; // Guarda o estado da primeira carta (ex: "SP")
    char codigo1[5]; // Guarda o código da primeira carta (ex: "SP01")
    char cidade1[50]; // Guarda o nome da cidade da primeira carta
    int populacao1; // Guarda a população da primeira carta
    float area1; // Guarda a área da primeira carta
    float pib1; // Guarda o PIB da primeira carta
    int pontosturisticos1; // Guarda o número de pontos turísticos da primeira carta
    float densidade1; // Guarda a densidade populacional da primeira carta
    float pibPerCapita1; // Guarda o PIB per capita da primeira carta

    char estado2[3]; // Guarda o estado da segunda carta (ex: "RJ")
    char codigo2[5]; // Guarda o código da segunda carta (ex: "RJ02")
    char cidade2[50]; // Guarda o nome da cidade da segunda carta
    int populacao2; // Guarda a população da segunda carta
    float area2; // Guarda a área da segunda carta
    float pib2; // Guarda o PIB da segunda carta
    int pontosturisticos2; // Guarda o número de pontos turísticos da segunda carta
    float densidade2; // Guarda a densidade populacional da segunda carta
    float pibPerCapita2; // Guarda o PIB per capita da segunda carta

    // Cadastro dos dados da primeira carta
    printf("-----Cadastro da Primeira Carta-----\n"); // Mostra mensagem de início do cadastro
    printf("Digite o estado da primeira carta (ex: SP): "); // Pede para digitar o estado
    scanf("%2s", estado1); // Lê o estado digitado
    printf("Digite o código da primeira carta (ex: SP01): "); // Pede para digitar o código
    scanf("%4s", codigo1); // Lê o código digitado
    printf("Digite o nome da cidade da primeira carta: "); // Pede para digitar o nome da cidade
    scanf("%49s", cidade1); // Lê o nome da cidade digitado
    printf("Digite a população da primeira carta: "); // Pede para digitar a população
    scanf("%d", &populacao1); // Lê a população digitada
    printf("Digite a área da primeira carta (km²): "); // Pede para digitar a área
    scanf("%f", &area1); // Lê a área digitada
    printf("Digite o PIB da primeira carta: "); // Pede para digitar o PIB
    scanf("%f", &pib1); // Lê o PIB digitado
    printf("Digite o número de pontos turísticos da primeira carta: "); // Pede para digitar o número de pontos turísticos
    scanf("%d", &pontosturisticos1); // Lê o número de pontos turísticos digitado

    // Calcula a densidade populacional da primeira carta (população dividido pela área)
    densidade1 = populacao1 / area1;
    // Calcula o PIB per capita da primeira carta (PIB dividido pela população)
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro dos dados da segunda carta
    printf("-----Cadastro da Segunda Carta-----\n"); // Mostra mensagem de início do cadastro
    printf("Digite o estado da segunda carta (ex: RJ): "); // Pede para digitar o estado
    scanf("%2s", estado2); // Lê o estado digitado
    printf("Digite o código da segunda carta (ex: RJ02): "); // Pede para digitar o código
    scanf("%4s", codigo2); // Lê o código digitado
    printf("Digite o nome da cidade da segunda carta: "); // Pede para digitar o nome da cidade
    scanf("%49s", cidade2); // Lê o nome da cidade digitado
    printf("Digite a população da segunda carta: "); // Pede para digitar a população
    scanf("%d", &populacao2); // Lê a população digitada
    printf("Digite a área da segunda carta (km²): "); // Pede para digitar a área
    scanf("%f", &area2); // Lê a área digitada
    printf("Digite o PIB da segunda carta: "); // Pede para digitar o PIB
    scanf("%f", &pib2); // Lê o PIB digitado
    printf("Digite o número de pontos turísticos da segunda carta: "); // Pede para digitar o número de pontos turísticos
    scanf("%d", &pontosturisticos2); // Lê o número de pontos turísticos digitado

    // Calcula a densidade populacional da segunda carta (população dividido pela área)
    densidade2 = populacao2 / area2;
    // Calcula o PIB per capita da segunda carta (PIB dividido pela população)
    pibPerCapita2 = pib2 / populacao2;

    // Exibe todos os dados cadastrados das cartas
    printf("-----Exibir Dados Cadastrados-----\n"); // Mostra mensagem de exibição dos dados

    // Exibe os dados da primeira carta
    printf("-----Primeira Carta-----\n"); // Mostra título da primeira carta
    printf("Estado: %s\n", estado1); // Mostra o estado
    printf("Código: %s\n", codigo1); // Mostra o código
    printf("Cidade: %s\n", cidade1); // Mostra o nome da cidade
    printf("População: %d\n", populacao1); // Mostra a população
    printf("Área: %.2f km²\n", area1); // Mostra a área
    printf("PIB: %.2f bilhões de reais\n", pib1); // Mostra o PIB
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1); // Mostra o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Mostra a densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Mostra o PIB per capita

    // Exibe os dados da segunda carta
    printf("-----Segunda Carta-----\n"); // Mostra título da segunda carta
    printf("Estado: %s\n", estado2); // Mostra o estado
    printf("Código: %s\n", codigo2); // Mostra o código
    printf("Cidade: %s\n", cidade2); // Mostra o nome da cidade
    printf("População: %d\n", populacao2); // Mostra a população
    printf("Área: %.2f km²\n", area2); // Mostra a área
    printf("PIB: %.2f bilhões de reais\n", pib2); // Mostra o PIB
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2); // Mostra o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Mostra a densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); // Mostra o PIB per capita

    printf("-----Fim do Cadastro-----\n"); // Mostra mensagem de fim do cadastro
    return 0; // Finaliza o programa
}