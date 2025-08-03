#include <stdio.h> //inclui a biblioteca padrão de entrada e saída que inclui funções printf e scanf.

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Aluno: Matheus Henrique Sabino - Nível Novato: Cadastro Básico

int main() { //inicio da execução do programa
    //informações da primeira carta
    int populacao1; //declarar variavel inteira da população da primeira carta
    float area1; //declarar variavel flutuante da area da primeira carta
    float pib1; //declarar variavel flutuante do PIB da primeira carta
    int pontosturisticos1; //declarar variavel inteira do numero de pontos turisticos da primeira carta

    //informações da segunda carta
    int populacao2; //declarar variavel inteira da população da segunda carta
    float area2; //declarar variavel flutuante da area da segunda carta
    float pib2; //declarar variavel flutuante do PIB da segunda carta
    int pontosturisticos2; //declarar variavel inteira do numero de pontos turisticos da segunda carga

    //inserir valores primeira carta
    printf("-----Insira as informações da primeira carta----- \n"); //instruir que as informações serão da primeria carta e pular linha

    printf("Digite a população da primeira carta: "); //solicita digitar a população
    scanf("%d", &populacao1); //armazena variavel inteira, digitada no teclado, em populacao1

    printf("Digite a área da primeira carta (km²): "); //solicita digitar a área
    scanf("%f", &area1); //armazena variavel flutuante, digitada no teclado, em area1

    printf("Digite o PIB da primeira carta: "); //solicita digitar o PIB
    scanf("%f", &pib1); //armazena variavel flutuante, digitada no teclado, em pib1

    printf("Digite o número de pontos turísticos da primeira carta: "); //solicita digitar o numero de pontos turisticos
    scanf("%d", &pontosturisticos1); //armazena variavel inteira, digitada no teclado, em pontosturisticos1

    //inserir valores segunda carta
    printf("-----Insira as informações da segunda carta----- \n"); //instruir que as informações serão da segunda carta e pular linha

    printf("Digite a população da segunda carta: "); //solicita digitar a população
    scanf("%d", &populacao2); //armazena variavel inteira, digitada no teclado, em populacao2

    printf("Digite a área da segunda carta (km²): "); //solicita digitar a área
    scanf("%f", &area2); //armazena variavel flutuante, digitada no teclado, em area2

    printf("Digite o PIB da segunda carta: "); //solicita digitar o PIB
    scanf("%f", &pib2); //armazena variavel flutuante, digitada no teclado, em pib2

    printf("Digite o número de pontos turísticos da segunda carta: "); //solicita digitar o numero de pontos turisticos
    scanf("%d", &pontosturisticos2); //armazena variavel inteira, digitada no teclado, em pontosturisticos2

    printf("-----Exibir Dados Cadastrados-----\n"); //exibir dados cadastrados organizadamente

    printf("-----Primeira Carta-----\n");
    printf("A população da primeira carta é: %d\n", populacao1); //exibir a população da primeira carta
    printf("A área da primeira carta é: %.2f km²\n", area1); //exibir a área da primeira carta com duas casas decimais
    printf("O PIB da primeira carta é: R$ %.2f\n", pib1); //exibir o PIB da primeira carta com duas casas decimais
    printf("O número de pontos turísticos da primeira carta é: %d\n", pontosturisticos1); //exibir o numero de pontos turisticos da primeira carta

    printf("-----Segunda Carta-----\n");
    printf("A população da segunda carta é: %d\n", populacao2); //exibir a população da segunda carta
    printf("A área da segunda carta é: %.2f km²\n", area2); //exibir a área da segunda carta com duas casas decimais
    printf("O PIB da segunda carta é: R$ %.2f\n", pib2); //exibir o PIB da segunda carta com duas casas decimais
    printf("O número de pontos turísticos da segunda carta é: %d\n", pontosturisticos2); //exibir o numero de pontos turisticos da segunda carta

    //finalizar o programa
    printf("-----Fim do Cadastro-----\n"); //exibir mensagem de fim do cadastro

    return 0;
}
