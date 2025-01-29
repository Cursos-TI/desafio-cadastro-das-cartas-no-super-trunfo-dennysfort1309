#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

              // informações das variaveis.
char  estado [10];
char  cidade [20];  
char  carta  [10];
int   populacao;
int   pontoturistico;
float territorio; 
float pib;


              // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

       //cadastro de cartas feita pelo usuario:
    printf("****  Bem-vindo ao super trunfo países**** \n");
    
    printf("digite o estado: \n");
    scanf ("%s",  &estado);
   
    printf("nome da cidade:\n");
    scanf (" %s",  &cidade);
  
    printf("codigo da carta :\n");
    scanf ("%s",  &carta);
  
    printf("numero da populacao atual :\n");
    scanf ("%d",  &populacao);
  
    printf("quantidade de ponto turistico:\n");
    scanf("%d",  &pontoturistico);
  
    printf("tamanho do territorio m²:\n");
    scanf ("%f",  &territorio);
  
    printf("digite o valor do pib:\n");
    scanf ("%f",  &pib);


    return 0;
}
