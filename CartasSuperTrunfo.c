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
    
    
    char Estado[20], nome[20];
    int população, codigo, pontos;
    float área, PIB, Densidade, capita, superpoder;

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

    //SEGUNDA PARTE DO DESAFIO
    
    Densidade = (float) população / área;
    capita = (float) PIB / população;
    
    //TERCEIRA PARTE DO DESAFIO
    superpoder = (float) população + área + PIB + pontos + capita + (1 / Densidade);
    
    printf("CARTA 2\n");
    
    
    char Estado2 [20], nome2[20];
    int população2, codigo2, pontos2;
    float área2, PIB2, densidade2, capita2, superpoder2;

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
    
    //SEGUNDA PARTE DO DESAFIO
    densidade2 = (float) população2 / área2;
    capita2 = (float) PIB2 / população2;
    
    //TERCEIRA PARTE DO DESAFIO
    superpoder2 = (float) população2 + área2 + PIB2 + pontos2 + capita2 + (1 / densidade2);
    
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
    
    printf (" Super Poder: %2.f\n", superpoder);

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
    
    printf ("Super Poder: %2.f\n", superpoder2);


    printf("    ***comparação das cartas***     \n");

    printf("população: carta1 venceu %d\n", população > população2);
    printf("área: carta1 venceu %d\n", área > área2);
    printf("PIB: carta1 venceu %d\n", PIB > PIB2);
    printf("Pontos turísticos: carta1 venceu %d\n", pontos > pontos2);
    printf("Densidade populacional: carta1 venceu %d\n", Densidade < densidade2); //menor vence
    printf("PIB per Capita: carta1 venceu %d\n", capita > capita2);
    printf("Super Poder: carta1 venceu %d\n", superpoder > superpoder2);

    return 0 ;
  }
  