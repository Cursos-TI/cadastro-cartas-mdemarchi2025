#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char EstadoC1[1], EstadoC2[1];
    char Codigo_CartaC1[3], Codigo_CartaC2[3];
    char Nome_CidadeC1[20], Nome_CidadeC2[20];
    int PopulacaoC1, PopulacaoC2;
    float AreaC1, AreaC2;
    float PibC1, PibC2;
    int Num_Pontos_TuristicosC1, Num_Pontos_TuristicosC2;
  
  // Área para entrada de dados Primeiro Jogador

    printf("Bem-vindo ao Super Trunfo!\n");
    printf("==============================\n");
   
    printf("Jogador 1 - Insira os dados da Sua Carta\n");
    printf("Estado (1 Letra de A a H): \n");
    scanf("%s", EstadoC1);
    printf("Codigo da Carta (3 Dígitos); \n");
    scanf("%s", Codigo_CartaC1);
    printf("Nome da Cidade: \n");
    scanf("%s", Nome_CidadeC1);
    printf("Populacao: \n");
    scanf("%d", &PopulacaoC1);
    printf("Area: \n");
    scanf("%f", &AreaC1);
    printf("PIB: \n");
    scanf("%f", &PibC1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Num_Pontos_TuristicosC1);

  // Entrada de dados do Segundo Jogador
   
    printf("\nJogador 2 - Insira os dados da Sua Carta\n");
    printf("Estado (1 Letra de A a H): \n");
    scanf("%s", EstadoC2);
    printf("Codigo da Carta (3 Dígitos); \n");
    scanf("%s", Codigo_CartaC2);
    printf("Nome da Cidade: \n");
    scanf("%s", Nome_CidadeC2);
    printf("População: \n");
    scanf("%d", &PopulacaoC2);
    printf("Área: \n");
    scanf("%f", &AreaC2);
    printf("PIB; \n");
    scanf("%f", &PibC2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Num_Pontos_TuristicosC2);

  // Área para exibição dos dados da cidade
  // APRESENTANDO A CARTA DO PRIMEIRO JOGADOR

    printf("\nCarta do Primeiro Jogador 1\n");
    printf("==============================\n");
    printf("Estado: %s\n", EstadoC1);
    printf("Codigo da Carta: %s\n", Codigo_CartaC1);
    printf("Nome da Cidade: %s\n", Nome_CidadeC1);
    printf("População: %d\n", PopulacaoC1);
    printf("Área: %.2f\n", AreaC1);
    printf("PIB: %.2f\n", PibC1);
    printf("Número de Pontos Turísticos: %d\n", Num_Pontos_TuristicosC1);

  // Apresentação da Carta do Segundo Jogador

    printf("\n Carta do Segundo Jogador\n");
    printf("==============================\n");
    printf("Estado: %s\n", EstadoC2);
    printf("Codigo da Carta: %s\n", Codigo_CartaC2);
    printf("Nome da Cidade: %s\n", Nome_CidadeC2);    
    printf("População: %d\n", PopulacaoC2);
    printf("Área: %.2f\n", AreaC2);
    printf("PIB: %.2f\n", PibC2);
    printf("Número de Pontos Turísticos: %d\n", Num_Pontos_TuristicosC2);
    printf("==============================\n");

return 0;
} 
