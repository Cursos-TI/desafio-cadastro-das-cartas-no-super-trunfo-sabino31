#include <stdio.h> // Biblioteca padrão para entrada/saída. Necessária para printf, scanf, fgets, etc.
#include <string.h> // Biblioteca para manipulação de strings. Usada para funções como strcspn.

int main() { // Início da execução do programa

    // Declaração das variáveis da primeira carta
    char estado1[3]; // Guarda a sigla do estado (2 caracteres + '\0'). Usar tamanho 3 garante espaço para o terminador nulo.
    char codigo1[5]; // Guarda o código da carta (até 4 caracteres + '\0').
    char cidade1[50]; // Guarda o nome da cidade. Tamanho suficiente para nomes compostos.
    unsigned long int populacao1; // Tipo unsigned long int permite armazenar populações grandes sem risco de overflow.
    float area1; // Área em km², tipo float para permitir valores decimais.
    float pib1; // PIB em bilhões de reais, tipo float para precisão.
    int pontosturisticos1; // Número de pontos turísticos, tipo int pois é um valor inteiro.
    float densidade1; // Densidade populacional calculada, tipo float para precisão.
    float pibPerCapita1; // PIB per capita calculado, tipo float para precisão.

    // Declaração das variáveis da segunda carta
    char estado2[3]; // Mesma lógica da primeira carta.
    char codigo2[5]; // Mesma lógica da primeira carta.
    char cidade2[50]; // Mesma lógica da primeira carta.
    unsigned long int populacao2; // Mesma lógica da primeira carta.
    float area2; // Mesma lógica da primeira carta.
    float pib2; // Mesma lógica da primeira carta.
    int pontosturisticos2; // Mesma lógica da primeira carta.
    float densidade2; // Mesma lógica da primeira carta.
    float pibPerCapita2; // Mesma lógica da primeira carta.


    // Cadastro dos dados da primeira carta
    printf("-----Cadastro da Primeira Carta-----\n"); // Exibe mensagem para o usuário saber que está cadastrando a primeira carta.

    printf("Digite o estado da primeira carta (ex: SP): "); // Solicita a sigla do estado.
    scanf("%2s", estado1); // Lê até 2 caracteres, evitando buffer overflow. Boa prática para entradas curtas.
    printf("Digite o código da primeira carta (ex: SP01): "); // Solicita o código da carta.
    scanf("%4s", codigo1); // Lê até 4 caracteres, evitando buffer overflow.
    printf("Digite a população da primeira carta: "); // Solicita a população.
    scanf("%lu", &populacao1); // Lê um número inteiro grande, usando %lu para unsigned long int.
    printf("Digite a área da primeira carta (km²): "); // Solicita a área.
    scanf("%f", &area1); // Lê valor decimal, usando %f para float.
    printf("Digite o PIB da primeira carta: "); // Solicita o PIB.
    scanf("%f", &pib1); // Lê valor decimal, usando %f para float.
    printf("Digite o número de pontos turísticos da primeira carta: "); // Solicita o número de pontos turísticos.
    scanf("%d", &pontosturisticos1); // Lê valor inteiro, usando %d para int.
    getchar(); // Consome o '\n' deixado pelo último scanf, evitando problemas na leitura da próxima string.
    printf("Digite o nome da cidade da primeira carta: "); // Solicita o nome da cidade.
    fgets(cidade1, sizeof(cidade1), stdin); // Lê a linha inteira, permitindo nomes compostos com espaços. Boa prática para nomes de cidades.
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n' do final da string, que o fgets pode adicionar.


    // Calcula a densidade populacional da primeira carta
    // Verifica se a área é diferente de zero para evitar divisão por zero.
    if (area1 != 0)
        densidade1 = (float)populacao1 / area1; // Casting explícito garante divisão em ponto flutuante.
    else
        densidade1 = 0.0f; // Se área for zero, atribui 0.0 para evitar erro.

    // Calcula o PIB per capita da primeira carta
    // Verifica se a população é diferente de zero para evitar divisão por zero.
    if (populacao1 != 0)
        pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // Multiplica PIB por 1 bilhão para converter para reais, depois divide por população (casting para float).
    else
        pibPerCapita1 = 0.0f; // Se população for zero, atribui 0.0 para evitar erro.


    // Cadastro dos dados da segunda carta
    printf("-----Cadastro da Segunda Carta-----\n"); // Exibe mensagem para o usuário saber que está cadastrando a segunda carta.

    printf("Digite o estado da segunda carta (ex: RJ): "); // Solicita a sigla do estado.
    scanf("%2s", estado2); // Lê até 2 caracteres, evitando buffer overflow.
    printf("Digite o código da segunda carta (ex: RJ02): "); // Solicita o código da carta.
    scanf("%4s", codigo2); // Lê até 4 caracteres, evitando buffer overflow.
    printf("Digite a população da segunda carta: "); // Solicita a população.
    scanf("%lu", &populacao2); // Lê um número inteiro grande, usando %lu para unsigned long int.
    printf("Digite a área da segunda carta (km²): "); // Solicita a área.
    scanf("%f", &area2); // Lê valor decimal, usando %f para float.
    printf("Digite o PIB da segunda carta: "); // Solicita o PIB.
    scanf("%f", &pib2); // Lê valor decimal, usando %f para float.
    printf("Digite o número de pontos turísticos da segunda carta: "); // Solicita o número de pontos turísticos.
    scanf("%d", &pontosturisticos2); // Lê valor inteiro, usando %d para int.
    getchar(); // Consome o '\n' deixado pelo último scanf, evitando problemas na leitura da próxima string.
    printf("Digite o nome da cidade da segunda carta: "); // Solicita o nome da cidade.
    fgets(cidade2, sizeof(cidade2), stdin); // Lê a linha inteira, permitindo nomes compostos com espaços.
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o '\n' do final da string.


    // Calcula a densidade populacional da segunda carta
    // Verifica se a área é diferente de zero para evitar divisão por zero.
    if (area2 != 0)
        densidade2 = (float)populacao2 / area2; // Casting explícito garante divisão em ponto flutuante.
    else
        densidade2 = 0.0f; // Se área for zero, atribui 0.0 para evitar erro.

    // Calcula o PIB per capita da segunda carta
    // Verifica se a população é diferente de zero para evitar divisão por zero.
    if (populacao2 != 0)
        pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2; // Multiplica PIB por 1 bilhão para converter para reais, depois divide por população.
    else
        pibPerCapita2 = 0.0f; // Se população for zero, atribui 0.0 para evitar erro.

    // Exibe todos os dados cadastrados das cartas
    printf("-----Exibir Dados Cadastrados-----\n"); // Exibe mensagem para o usuário saber que os dados serão mostrados.

    // Exibe os dados da primeira carta
    printf("-----Primeira Carta-----\n"); // Título para separar visualmente os dados da primeira carta.
    printf("Estado: %s\n", estado1); // Mostra a sigla do estado cadastrada.
    printf("Código: %s\n", codigo1); // Mostra o código da carta.
    printf("Cidade: %s\n", cidade1); // Mostra o nome da cidade cadastrada.
    printf("População: %lu\n", populacao1); // Mostra a população cadastrada. %lu para unsigned long int.
    printf("Área: %.2f km²\n", area1); // Mostra a área cadastrada, com 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1); // Mostra o PIB cadastrado, mantendo a unidade de bilhões.
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1); // Mostra o número de pontos turísticos cadastrados.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Mostra a densidade calculada.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Mostra o PIB per capita calculado.

    // Exibe os dados da segunda carta
    printf("-----Segunda Carta-----\n"); // Título para separar visualmente os dados da segunda carta.
    printf("Estado: %s\n", estado2); // Mostra a sigla do estado cadastrada.
    printf("Código: %s\n", codigo2); // Mostra o código da carta.
    printf("Cidade: %s\n", cidade2); // Mostra o nome da cidade cadastrada.
    printf("População: %lu\n", populacao2); // Mostra a população cadastrada. %lu para unsigned long int.
    printf("Área: %.2f km²\n", area2); // Mostra a área cadastrada, com 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib2); // Mostra o PIB cadastrado, mantendo a unidade de bilhões.
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2); // Mostra o número de pontos turísticos cadastrados.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Mostra a densidade calculada.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); // Mostra o PIB per capita calculado.

    printf("-----Fim do Cadastro-----\n"); // Mensagem final indicando o fim do processo.

    // Cálculo do Super Poder para cada carta
    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade populacional)
    // Todos os termos devem ser somados como float
    float superPoder1, superPoder2;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibPerCapita1 + (densidade1 != 0.0f ? (1.0f/densidade1) : 0.0f);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibPerCapita2 + (densidade2 != 0.0f ? (1.0f/densidade2) : 0.0f);

    // Exibe os Super Poderes
    printf("Super Poder da Primeira Carta: %.2f\n", superPoder1);
    printf("Super Poder da Segunda Carta: %.2f\n", superPoder2);

    // Comparação de todos os atributos numéricos
    printf("\n===== Comparação de Cartas =====\n");


    // 1. População
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    else if (populacao2 > populacao1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    // 2. Área
    printf("\nComparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
    if (area1 > area2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    else if (area2 > area1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    // 3. PIB
    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
    if (pib1 > pib2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    else if (pib2 > pib1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    // 4. Pontos Turísticos
    printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosturisticos1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    else if (pontosturisticos2 > pontosturisticos1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    // 5. Densidade Populacional (menor vence)
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
    if (densidade1 < densidade2)
        printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", cidade1);
    else if (densidade2 < densidade1)
        printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    // 6. PIB per Capita
    printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    return 0; // Retorna 0 para indicar que o programa terminou corretamente.
}