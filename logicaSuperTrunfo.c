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

    //Carta 1:
    char estado;
    char codigodacarta[20], cidade[20];
    int populacao, pontosturisticos;
    float area, pib;

    printf("-CARTA 1-" "\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigodacarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    printf(" \n");
    printf("-RESUMO DA CARTA 1-" "\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d pessoas \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf ("Número de pontos turísticos: %d pontos\n", pontosturisticos);
    printf(" \n");

    //Carta 2:
    char estado2;
    char codigodacarta2[20], cidade2[20];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("-CARTA 2-" "\n");

    printf("Digite o Estado (uma letra de A a H): " );
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf(" \n");
    printf("-RESUMO DA CARTA 2-" "\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d pessoas\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Pontos turísticos: %d pontos\n", pontosturisticos2);

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

        printf(" \n");
    printf("-CARTA VENCEDORA (atributo: PIB)-" "\n");
    
    printf("Carta 1 - %s : %.2f \n", cidade, pib); 
    printf("Carta 2 - %s : %.2f \n", cidade2, pib2); 

    if (pib > pib2) {
    printf("%s é o vencedor \n", cidade);
 } else {
    printf("%s é o vencedor! \n", cidade2);
  }

    return 0;
}
