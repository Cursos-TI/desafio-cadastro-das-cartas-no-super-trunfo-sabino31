#include <stdio.h> //inclui a biblioteca padrão de entrada e saída que inclui funções printf e scanf.

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Aluno: Matheus Henrique Sabino - Nível Novato: Cadastro Básico - Revisado

int main() { //inicio da execução do programa
    //informações da primeira carta
    char estado1[3]; //declarar array de caracteres para o estado da primeira carta (ex: "SP")
    char codigo1[5]; //declarar array de caracteres para o código da primeira carta (ex: "A01")
    char cidade1[50]; //declarar array de caracteres para o nome da cidade da primeira carta
    int populacao1; //declarar variavel inteira da população da primeira carta
    float area1; //declarar variavel flutuante da area da primeira carta
    float pib1; //declarar variavel flutuante do PIB da primeira carta
    int pontosturisticos1; //declarar variavel inteira do numero de pontos turisticos da primeira carta

    //informações da segunda carta
    char estado2[3]; //declarar array de caracteres para o estado da segunda carta
    char codigo2[5]; //declarar array de caracteres para o código da segunda carta
    char cidade2[50]; //declarar array de caracteres para o nome da cidade da segunda carta
    int populacao2; //declarar variavel inteira da população da segunda carta
    float area2; //declarar variavel flutuante da area da segunda carta
    float pib2; //declarar variavel flutuante do PIB da segunda carta
    int pontosturisticos2; //declarar variavel inteira do numero de pontos turisticos da segunda carga

    //inserir valores primeira carta
    printf("-----Insira as informações da primeira carta----- \n"); //instruir que as informações serão da primeria carta e pular linha

    printf("Digite o estado da primeira carta (ex: SP): "); //solicita digitar o estado
    scanf("%2s", estado1); //armazena variavel do tipo string, digitada no teclado, em estado1

    printf("Digite o código da primeira carta (ex: A01): "); //solicita digitar o código
    scanf("%4s", codigo1); //armazena variavel do tipo string, digitada no teclado, em codigo1

    printf("Digite o nome da cidade da primeira carta: "); //solicita digitar o nome da cidade
    scanf("%49s", cidade1); //armazena variavel do tipo string, digitada no teclado, em cidade1

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

    printf("Digite o estado da segunda carta (ex: RJ): "); //solicita digitar o estado
    scanf("%2s", estado2); //armazena variavel do tipo string, digitada no teclado, em estado2

    printf("Digite o código da segunda carta (ex: B02): "); //solicita digitar o código
    scanf("%4s", codigo2); //armazena variavel do tipo string, digitada no teclado, em codigo2

    printf("Digite o nome da cidade da segunda carta: "); //solicita digitar o nome da cidade
    scanf("%49s", cidade2); //armazena variavel do tipo string, digitada no teclado, em cidade2

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
    printf("Estado: %s\n", estado1); //exibir o estado da primeira carta
    printf("Código: %s\n", codigo1); //exibir o código da primeira carta
    printf("Cidade: %s\n", cidade1); //exibir o nome da cidade da primeira carta
    printf("A população da primeira carta é: %d\n", populacao1); //exibir a população da primeira carta
    printf("A área da primeira carta é: %.2f km²\n", area1); //exibir a área da primeira carta com duas casas decimais
    printf("O PIB da primeira carta é: R$ %.2f\n", pib1); //exibir o PIB da primeira carta com duas casas decimais
    printf("O número de pontos turísticos da primeira carta é: %d\n", pontosturisticos1); //exibir o numero de pontos turisticos da primeira carta

    printf("-----Segunda Carta-----\n");
    printf("Estado: %s\n", estado2); //exibir o estado da segunda carta
    printf("Código: %s\n", codigo2); //exibir o código da segunda carta
    printf("Cidade: %s\n", cidade2); //exibir o nome da cidade da segunda carta
    printf("A população da segunda carta é: %d\n", populacao2); //exibir a população da segunda carta
    printf("A área da segunda carta é: %.2f km²\n", area2); //exibir a área da segunda carta com duas casas decimais
    printf("O PIB da segunda carta é: R$ %.2f\n", pib2); //exibir o PIB da segunda carta com duas casas decimais
    printf("O número de pontos turísticos da segunda carta é: %d\n", pontosturisticos2); //exibir o numero de pontos turisticos da segunda carta

    //finalizar o programa
    printf("-----Fim do Cadastro-----\n"); //exibir mensagem de fim do cadastro

    return 0;
}