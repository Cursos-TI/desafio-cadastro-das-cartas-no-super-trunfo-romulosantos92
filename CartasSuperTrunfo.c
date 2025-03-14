#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Desafio Super Trunfo - Países");
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao01, populacao02, pontosTuristicos01, pontosTuristicos02;
    float area01, area02, pib01, pib02;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastrar Carta 01:\n");
    printf("População: ");
    scanf("%d", &populacao01);
    printf("Área: ");
    scanf("%f", &area01);
    printf("PIB: ");
    scanf("%f", &pib01);
    printf("No. de pontos turísticos: ");
    scanf("%d", &pontosTuristicos01);

    printf("\nCadastrar Carta 02:\n");
    printf("População: ");
    scanf("%d", &populacao02);
    printf("Área: ");
    scanf("%f", &area02);
    printf("PIB: ");
    scanf("%f", &pib02);
    printf("No. de pontos turísticos: ");
    scanf("%d", &pontosTuristicos02);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Atributos carta 01:\n");
    printf("População: %d\n", populacao01);
    printf("Área: %.2f\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("No. de pontos turísticos: %d\n\n", pontosTuristicos01);

    printf("Atributos carta 02:\n");
    printf("População: %d\n", populacao02);
    printf("Área: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("No. de pontos turísticos: %d\n\n", pontosTuristicos02);

    return 0;
}
