#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("\n**** Criando as Cartas do Super Trunfo ****\n\n");
  //CARTA1
  char estado;
  printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
  scanf(" %c", &estado);
  
  char codigoDaCarta[4];
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
  
  float densidadePopulacional = populacao / area;
  
  float pibPerCapita;
  
  pibPerCapita = (float) populacao / pib;
  
  //CARTA 2
  printf("\nCARTA 2 INSIRA OS DADOS \n\n");
  
  char estado2;
  printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
  scanf(" %c", &estado2);
  
  char codigoDaCarta2[4];
  printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
  scanf("%s", codigoDaCarta2);
  
  char nomeDaCidade2[30];
  printf("O nome da cidade (máximo 29 caracteres): \n");
  scanf("%s", nomeDaCidade2);
  
  int populacao2;
  printf("A população da cidade (número inteiro): \n");
  scanf("%d", &populacao2);
  
  float area2;
  printf("A área da cidade em km² (número decimal): \n");
  scanf("%f", &area2);
  
  float pib2;
  printf("O PIB da cidade em bilhões (número decimal):  \n");
  scanf("%f", &pib2);
  
  int numeroPontosTuristicos2;
  printf("O número de pontos turísticos na cidade (número inteiro):  \n");
  scanf("%d", &numeroPontosTuristicos2);
  
  float densidadePopulacional2 = populacao2 / area2;
  
  float pibPerCapita2;
  
  pibPerCapita2 = (float) populacao2 / pib2;
  
  printf(" Carta 1:\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f bilhões \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais \n\n", estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, numeroPontosTuristicos, densidadePopulacional, pibPerCapita);
  printf(" Carta 2:\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f bilhões \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais", estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, numeroPontosTuristicos2, densidadePopulacional2, pibPerCapita2);

return 0;
 
} 
