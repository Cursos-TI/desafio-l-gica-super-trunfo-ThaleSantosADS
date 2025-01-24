#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    
    char letra, letra2;
    int numero, numero2;
    char nome[50], nome2[50];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    double area, area2, pib, pib2;
    int pontos, pontos2;
    int scoreCarta1 = 0, scoreCarta2 = 0;

    printf("## Cadastro de cartas SuperTrunfo ##\n");

    // Cadastro da primeira carta
    printf("Insira uma letra para o código da nova carta: ");
    scanf(" %c", &letra);

    printf("Insira um número para o código da nova carta: ");
    scanf(" %d", &numero);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", nome); // Permite entrada com espaços

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade); // Permite entrada com espaços

    printf("Insira o número de população desta cidade: ");
    scanf("%d", &populacao);

    printf("Insira a extensão territorial deste país (em km²): ");
    scanf("%lf", &area);

    printf("Insira o PIB da cidade (em milhões): ");
    scanf("%lf", &pib);

    printf("Insira a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos);

    printf("\nTodos os dados da primeira carta foram cadastrados com sucesso!\n");

    // Apresentação dos dados da primeira carta
    printf("\n## Dados da primeira carta cadastrada ##\n");
    printf("Código da carta: %c%d\n", letra, numero);
    printf("País: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Extensão territorial: %.2lf km²\n", area);
    printf("PIB: R$%.2lf milhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    printf("\n#########################################\n");

    // Cadastro da segunda carta
    printf("\n## Cadastro da segunda carta ##\n");
    printf("Insira uma letra para o código da nova carta: ");
    scanf(" %c", &letra2);

    printf("Insira um número para o código da nova carta: ");
    scanf(" %d", &numero2);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", nome2); // Permite entrada com espaços

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Permite entrada com espaços

    printf("Insira o número de população desta cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a extensão territorial deste país (em km²): ");
    scanf("%lf", &area2);

    printf("Insira o PIB da cidade (em milhões): ");
    scanf("%lf", &pib2);

    printf("Insira a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos2);

    printf("\nTodos os dados da segunda carta foram cadastrados com sucesso!\n");

    // Apresentação dos dados da segunda carta
    printf("\n## Dados da segunda carta cadastrada ##\n");
    printf("Código da carta: %c%d\n", letra2, numero2);
    printf("País: %s\n", nome2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Extensão territorial: %.2lf km²\n", area2);
    printf("PIB: R$%.2lf milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    printf("\n#########################################\n");

    // Comparação das cartas
    printf("\n## Comparação das características das cartas ##\n");

    // Comparação de população
    printf("\n# Comparação de População #\n");
    if (populacao > populacao2) {
        printf("A cidade %s tem maior população.\n", cidade);
        scoreCarta1++;
    } else if (populacao2 > populacao) {
        printf("A cidade %s tem maior população.\n", cidade2);
        scoreCarta2++;
    } else {
        printf("As duas cidades possuem a mesma população.\n");
    }

    // Comparação de área
    printf("\n# Comparação de Extensão Territorial #\n");
    if (area > area2) {
        printf("O país %s tem maior extensão territorial.\n", nome);
        scoreCarta1++;
    } else if (area2 > area) {
        printf("O país %s tem maior extensão territorial.\n", nome2);
        scoreCarta2++;
    } else {
        printf("Os dois países possuem a mesma extensão territorial.\n");
    }

    // Comparação de PIB
    printf("\n# Comparação de PIB #\n");
    if (pib > pib2) {
        printf("A cidade %s tem maior PIB.\n", cidade);
        scoreCarta1++;
    } else if (pib2 > pib) {
        printf("A cidade %s tem maior PIB.\n", cidade2);
        scoreCarta2++;
    } else {
        printf("As duas cidades possuem o mesmo PIB.\n");
    }

    // Comparação de pontos turísticos
    printf("\n# Comparação de Pontos Turísticos #\n");
    if (pontos > pontos2) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade);
        scoreCarta1++;
    } else if (pontos2 > pontos) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade2);
        scoreCarta2++;
    } else {
        printf("As duas cidades possuem a mesma quantidade de pontos turísticos.\n");
    }

    // Declaração da carta vencedora
    printf("\n#########################################\n");
    if (scoreCarta1 > scoreCarta2) {
        printf("A carta vencedora é a primeira (%c%d - %s, %s) com %d pontos!\n", letra, numero, nome, cidade, scoreCarta1);
    } else if (scoreCarta2 > scoreCarta1) {
        printf("A carta vencedora é a segunda (%c%d - %s, %s) com %d pontos!\n", letra2, numero2, nome2, cidade2, scoreCarta2);
    } else {
        printf("Empate! Ambas as cartas possuem %d pontos.\n", scoreCarta1);
    }

return 0;


