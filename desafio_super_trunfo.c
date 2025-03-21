 #include <stdio.h>
 int main(){
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    double area1, area2, pib1, pib2;

    //Entrada de dados da primeira  carta
    printf("Carta 1: \n");
    printf(" 1-Digite uma letra de um estado de 'A' a 'H: ");
    scanf(" %c" , &estado1);

    printf(" 2-Digite o código da carta sendo a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s" , codigo1);

    printf(" 3-Digite o nome da cidade: ");
    scanf("%s49s\n" , cidade1);

    printf(" 4-Digite o numero de habitantes da cidade: ");
    scanf("%d" , &populacao1);

    printf(" 5-Digite a área da cidade em quilometros quadrados: ");
    scanf("%lf" , &area1);

    printf(" 6-Digite o PIB da cidade: ");
    scanf("%lf" , &pib1);

    printf(" 7-Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d\n", &pontos1);

    //Entrada de dados da segunda carta
    printf("Carta 2: \n");
    printf(" 1-Digite uma letra de um estado de 'A' a 'H: ");
    scanf(" %c" , &estado2);

    printf(" 2-Digite o código da carta sendo a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s" , codigo2);

    printf(" 3-Digite o nome da cidade: ");
    scanf("%s49s\n" , cidade2);

    printf(" 4-Digite o numero de habitantes da cidade: ");
    scanf("%d" , &populacao2);

    printf(" 5-Digite a área da cidade em quilometros quadrados: ");
    scanf("%lf" , &area2);

    printf(" 6-Digite o PIB da cidade: ");
    scanf("%lf" , &pib2);

    printf(" 7-Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d\n", &pontos2);

    // Exibir os dados das duas cartas
    printf("Informações das Cartas: \n");

    printf("Carta 1: \n");
    printf("Estado: %c, Código: %s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Área: %.2f km, PIB: %.2f\n", area1, pib1);
    printf("Número de pontos turisticos: %d, População: %d\n\n", pontos1, populacao1);

    printf("Carta 2: \n");
    printf("Estado: %c, Código: %s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Área: %.2f km, PIB: %.2f\n", area2, pib2);
    printf("Número de pontos turisticos: %d, População: %d\n", pontos2, populacao2);

    return 0;
 }