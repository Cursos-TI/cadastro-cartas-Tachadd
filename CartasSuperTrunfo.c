#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Área para definição das variáveis para armazenar as propriedades das cidades
// Área para entrada de dados
// Área para exibição dos dados da cidadechar cidade;
//printf("Qual o número de habitantes? \n");


  int main() {
  
    printf("CARTA 1\n");
    
    char Estado [20], nome[20];
    int população, codigo, pontos;
    float área, PIB;

    printf("Qual o Nome do Estado?  \n");
    scanf("%s", &Estado);

    printf("Qual o código da sua carta? \n");
    scanf("%d", &codigo);

    printf("Qual o nome da cidade? \n");
    scanf("%s", &nome);

    printf("Qual o número de Habitantes? \n");
    scanf("%d", &população);

    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pontos);

    printf("Qual o tamanho da area em km2? \n");
    scanf("%f", &área);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB);
  
    printf("CARTA 2\n");
    
    char Estado2 [20], nome2[20];
    int população2, codigo2, pontos2;
    float área2, PIB2;

    printf("Qual o Nome do Estado?  \n");
    scanf("%s", &Estado2);

    printf("Qual o código da sua carta? \n");
    scanf("%d", &codigo2);

    printf("Qual o nome da cidade? \n");
    scanf("%s", &nome2);

    printf("Qual o número de Habitantes? \n");
    scanf("%d", &população2);

    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pontos2);

    printf("Qual o tamanho da area em km2? \n");
    scanf("%f", &área2);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB2);
    
    //CARTA 1
    printf("CARTA 1\n");
    
    
    printf("ESTADO: %s\n", Estado);
    
    printf("CÓDIGO DA CARTA: %d\n", codigo);
    
    printf("CIDADE: %s\n", nome);
    
    printf("NÚMERO DE HABITANTES: %d\n", população);
    
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos);
    
    printf("TAMANHO EM KM2: %3.f\n", área );
    
    printf("PIB: %3.f\n", PIB);
    //CARTA 2
    printf("CARTA 2\n");
    
    printf("ESTADO: %s\n", Estado);
    
    printf("CÓDIGO DA CARTA: %d\n", codigo);
    
    printf("CIDADE: %s\n", nome);
    
    printf("NÚMERO DE HABITANTES: %d\n", população);
    
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos);
    
    printf("TAMANHO EM KM2: %3.f\n", área );
    
    printf("PIB: %3.f\n", PIB);

    return 0 ;
  }
  