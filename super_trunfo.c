  #include <stdio.h>

    int main () {
    
        // CARTA 1

    char estado [50];
    char codigo [50];
    char cidade [50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("Informe seu estado: \n");
    scanf("%s", estado);

    printf("Informe sua cidade: \n");
    scanf("%s", cidade);

    printf("Informe o código da carta. Exemplo: SP01, RJ02 e etc. \n");
    scanf("%s", codigo); 

    printf("Informe a população de sua cidade: \n");
    scanf("%i", &populacao);

    printf("Informe a área de sua cidade: \n");
    scanf("%f", &area);

    printf("Informe o PIB de sua cidade: \n");
    scanf("%f", &PIB);

    printf("Informe a quantidade de pontos turísticos em sua cidade: \n");
    scanf("%i", &pontosturisticos);

    printf("\nCarta 1\n\n");  
    printf("Estado: %s \nCidade: %s \nPopulação: %i \nÁrea: %f \nPIB: %f \nPontos turísticos: %i \n\n", estado, cidade, populacao, area, PIB, pontosturisticos);

    // CARTA 2
    
    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;

    printf("Informe seu segundo estado: \n");
    scanf("%s", estado2);

    printf("Informe sua segunda cidade: \n");
    scanf("%s", cidade2);

    printf("Informe o código de sua segunda carta. Exemplo: BH01, MG02 e etc. \n");
    scanf("%s", codigo2); 

    printf("Informe a população de sua segunda cidade: \n");
    scanf("%i", &populacao2);

    printf("Informe a área de sua segunda cidade: \n");
    scanf("%f", &area2);

    printf("Informe o PIB de sua segunda cidade: \n");
    scanf("%f", &PIB2);

    printf("Informe a quantidade de pontos turísticos em sua segunda cidade: \n");
    scanf("%i", &pontosturisticos2);

    printf("\nCarta 2\n\n");
    printf("Estado: %s \nCidade: %s \nPopulação: %i \nÁrea: %f \nPIB: %f \nPontos turísticos: %i \n", estado2, cidade2, populacao2, area2, PIB2, pontosturisticos2);

    return 0;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        
    }









