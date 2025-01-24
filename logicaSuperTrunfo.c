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

    char letra = 'A';
    int numero = 1;
    char nome[20] = "Brasil";
    char cidade[20] = "Rio de Janeiro";
    int populacao = 200000000;
    double area = 875.63;
    double pib = 53078.23;
    int pontos = 2;
    char letra2 = 'A';
    int numero2 = 2;
    char nome2[20] = "China";
    char cidade2[20] = "Xangai";
    int populacao2 = 1000000000;
    double area2 = 975.63;
    double pib2 = 56678.23;
    int pontos2 = 3;
    double diferenca;

    printf("## Cadastro de cartas SuperTrunfo ##\n");
    
    //Coleta de dados para cadastro da primeira carta.
    printf("Insira uma letra para o código da nova carta\n");
    scanf("%c", &letra);

    printf("Insira um número para o código da nova carta\n");
    scanf(" %d", &numero);
    printf("Código cadastrado com sucesso!\n");
    
    printf("Insira o nome do país\n");
    scanf(" %s", nome);
    printf("País cadastrado com sucesso!\n"); 

    printf("Insira o nome da Cidade\n");
    scanf(" %s", cidade);
    printf("Cidade cadastrada com sucesso!\n");       

    printf("Insira o número de população desta cidade\n");
    scanf("%d", &populacao);
    printf("População cadastrada com sucesso!\n");

    printf("Insira a extensão territorial deste país\n");
    scanf("%lf", &area);
    printf("Extensão territorial cadastrada com sucesso!\n");

    printf("Insira o PIB da cidade\n");
    scanf("%lf", &pib);
    printf("PIB cadastrado com sucesso!\n");

    printf("Insira a quantidade de pontos turísticos desta cidade\n");
    scanf("%d", &pontos);
    printf("Todos os seus dados foram cadastrados\n");
    
    printf("#########################################\n");
    printf("#########################################\n");

    //Apresentação dos dados da nova carta cadastrada.
    printf("\n## Nova carta cadastrada! ##\n");
    printf("Código da carta: %c%d\n", letra, numero);
    printf("País: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Extensão territorial: %.2lf km²\n", area);
    printf("PIB: R$%.2lf\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    printf("#############################################\n");
    printf("Cadastro de informações para a segunda Carta\n");
    printf("#############################################\n");

    //Coleta de dados para cadastro da segunda carta.
    printf("Insira uma letra para o código da nova carta\n");
    scanf(" %c", &letra2);

    printf("Insira um número para o código da nova carta\n");
    scanf(" %d", &numero2);
    printf("Código cadastrado com sucesso!\n");
    
    printf("Insira o nome do país\n");
    scanf(" %s", nome2);
    printf("País cadastrado com sucesso!\n"); 

    printf("Insira o nome da Cidade\n");
    scanf(" %s", cidade2);
    printf("Cidade cadastrada com sucesso!\n");       

    printf("Insira o número de população desta cidade\n");
    scanf("%d", &populacao2);
    printf("População cadastrada com sucesso!\n");

    printf("Insira a extensão territorial deste país\n");
    scanf("%lf", &area2);
    printf("Extensão territorial cadastrada com sucesso!\n");

    printf("Insira o PIB da cidade\n");
    scanf("%lf", &pib2);
    printf("PIB cadastrado com sucesso!\n");

    printf("Insira a quantidade de pontos turísticos desta cidade\n");
    scanf("%d", &pontos2);
        
    printf("#########################################\n");
    printf("Todos os seus dados foram cadastrados\n");
    printf("#########################################\n");

    //Apresentação dos dados da nova carta cadastrada.
    printf("\n## Dados da segunda carta cadastrada! ##\n");
    printf("Código da carta: %c%d\n", letra2, numero2);
    printf("País: %s\n", nome2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Extensão territorial: %.2lf km²\n", area2);
    printf("PIB: R$%.2lf\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    printf("#######################################\n");
    printf("Comparação de características das cartas\n");
    printf("#######################################\n");

    print("#Comparação de densidade populacional#\n");

    if(populacao > populacao2){
        printf("A cidade %s tem mais densidade populacional\n", cidade);
    }else if (populacao2 > populacao) {
        printf("A cidade %s tem mais densidade populacional\n", cidade2);
    } else {
        printf("As duas cidades tem a mesma densidade populacional\n");
    }

    printf("#Comparação de PIB#\n");

    if(pib > pib2){
        printf("O país %s tem o maior PIB\n", nome);
    } else if (pib2 > pib) {
        printf("O país %s tem o maior PIB\n", nome2);
    } else {
        printf("Os dois países tem o mesmo PIB\n");
    }
    
    printf("#Maior extenção territorial#\n");

    if (area > area2) {
    printf("O país %s, com %.2lf km², tem maior extensão territorial que %s, com %.2lf km².\n", nome, area, nome2, area2);
} else if (area2 > area) {
    printf("O país %s, com %.2lf km², tem maior extensão territorial que %s, com %.2lf km².\n", nome2, area2, nome, area);
} else {
    printf("Os países %s e %s possuem a mesma extensão territorial: %.2lf km².\n", nome, nome2, area);
}

return 0;
}
