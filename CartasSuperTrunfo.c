#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  int carta;
  printf("Escolha sua carta do super trunfo (1 a 5): \n");
  scanf("%d", &carta);

  char estado;
  printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
  scanf(" %c", &estado);

  char codigoDaCarta[3];
  printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
  scanf("%s", codigoDaCarta);

  char nomeDaCidade[30];
  printf("O nome da cidade (máximo 29 caracteres): \n");
  scanf("%s", nomeDaCidade);

  int populacao;
  printf("A população da cidade (número inteiro): \n");
  scanf("%d", &populacao);

  float area;
  printf("A área da cidade em km² (número decimal): \n");
  scanf("%f", &area);

  float pib;
  printf("O PIB da cidade em bilhões (número decimal):  \n");
  scanf("%f", &pib);

  int numeroPontosTuristicos;
  printf("O número de pontos turísticos na cidade (número inteiro):  \n");
  scanf("%d", &numeroPontosTuristicos);

  printf(" Carta: %d \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f bilhões \n Número de Pontos Turísticos: %d \n", carta, estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, numeroPontosTuristicos);


return 0;
} 
