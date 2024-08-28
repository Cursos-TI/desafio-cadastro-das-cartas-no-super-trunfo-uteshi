#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
    
    char cidade[15];
    int populacao;
    int area;
    int pib;
    int pontos_turisticos;
    int codigo_carta;
    
int main() {
    srand(time(NULL));
    printf("Cidade:");
    scanf("%s", &cidade);
    printf("População:");
    scanf("%d", &populacao);
    printf("Área em KM²:");
    scanf("%d", &area);
    printf("PIB:");
    scanf("%d", &pib);
    printf("Número de pontos turísticos:");
    scanf("%d", &pontos_turisticos);
    system("clear");

    codigo_carta = rand() % 1000;
    printf("Carta cadastrada com sucesso!\n");
    printf("Código da carta:%d\n", codigo_carta);
    printf("Cidade:%s\n", cidade);
    printf("População:%d\n", populacao);
    printf("Área em KM²:%d\n", area);
    printf("PIB:%d\n", pib);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos);
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
return 0;
}
