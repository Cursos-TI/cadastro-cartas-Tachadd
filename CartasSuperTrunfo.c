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
    float área, PIB, Densidade, capita;

    printf("Qual o Nome do Estado?  \n");
    scanf("%s", &Estado);

    printf("Qual o código da sua carta? \n");
    scanf("%s", &codigo);

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

    //segunda parte do desafio
    Densidade = (float) população / área;
    capita = (float) PIB / população;
  
    
    printf("CARTA 2\n");
    
    
    char Estado2 [20], nome2[20];
    int população2, codigo2, pontos2;
    float área2, PIB2, densidade2, capita2;

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
    
    //segunda parte do desafio
    densidade2 = (float) população / área;
    capita2 = (float) PIB / população;

    
    //CARTA 1
    
    
    printf("CARTA 1\n");
    
    
    printf("ESTADO: %s\n", Estado);
    
    printf("CÓDIGO DA CARTA: %d\n", codigo);
    
    printf("CIDADE: %s\n", nome);
    
    printf("NÚMERO DE HABITANTES: %d\n", população);
    
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos);
    
    printf("TAMANHO EM KM2: %3.f\n", área );
    
    printf("PIB: %3.f\n", PIB);
    
    printf("Densidade populacional: %.2f km²\n", Densidade);

    printf("PIB per capita: %.2f reais\n", capita);
    
    
    //CARTA 2
    
    
    printf("CARTA 2\n");
    
    printf("ESTADO: %s\n", Estado2);
    
    printf("CÓDIGO DA CARTA: %d\n", codigo2);
    
    printf("CIDADE: %s\n", nome2);
    
    printf("NÚMERO DE HABITANTES: %d\n", população2);
    
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos2);
    
    printf("TAMANHO EM KM2: %3.f\n", área2 );
    
    printf("PIB: %3.f\n", PIB2);

    printf("Densidade populacional: %.2f km²\n", densidade2);

    printf("PIB per capita: %.2f reais\n", capita2);

    return 0 ;
  }
  