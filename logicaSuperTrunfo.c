#include <stdio.h>

    // Dados da carta 1

    char estado1;                         // Letra do Estado: 'A' a 'E'
    char codigo1[4];                      // Código da carta: Ex: "A01", "B01","C01"
    char nomecidade1[50];                 // Nome da cidade
    unsigned long int populacao1;         // Número de habitantes
    float area1;                          // Tamanho em km²
    float pib1;                           // PIB em bilhões
    int pontost1;                         // Número de pontos turísticos
    float densidade1;                     //Densidade populacional
    float pibpercapita1;                  // Valor do pibpercapita
    float superpoder1;                    // Valor do super poder da carta
    
    // Dados da carta 2

    char estado2;                        // Letra do Estado: 'A' a 'E'
    char codigo2[4];                     // Código da carta: Ex: "A01", "B01","C01"
    char nomecidade2[50];                // Nome da cidade
    unsigned long int populacao2;        // Número de habitantes, com unsigned long int 
    float area2;                         // Tamanho em km²
    float pib2;                          // PIB em bilhões
    int pontost2;                        // Número de pontos turísticos
    float densidade2;                    //Densidade populacional
    float pibpercapita2;                 // Valor do  pibpercapita
    float superpoder2;                   // Valor do super poder da carta*
    
int main(){
    //===================================    
    //Cadastro das informações da carta 1
    //==================================== 

    printf("===Cadastro da carta 1===\n");

    printf("estado (A-E):");
    scanf(" %c", &estado1);

    printf("Código da carta (Ex:A01): ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", &nomecidade1);

    printf("População: ");
    scanf("%lu", &populacao1);  //Alterado para unsigned long int

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost1);

    //=========================
    // Cálculos para a Carta 1
    //=========================

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 *1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontost1 + pibpercapita1 + (1.0 / densidade1);

     //===================================
    // Cadastro das informações da carta 2
    //====================================
    
    printf("===Cadastro da carta 2===\n");

    printf("estado (A-E):");
    scanf(" %c", &estado2);

    printf("Código da carta (Ex:A01): ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", &nomecidade2);

    printf("População: ");
    scanf("%lu", &populacao2); // Alterado para unsigned long int

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost2);  

    //========================
    // Cálculos para a Carta 2
    //========================

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontost2 + pibpercapita2 + (1.0 / densidade2);
    
    //===========================
    // Exibir os dados das cartas
    // ==========================
    printf("===Carta 1===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos tuísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);

    printf("===Carta 2===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos tuísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder2);
    
    //======================
    //Comparações das cartas
    //======================

    printf("\n===Comparação de Cartas===\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontost1 > pontost2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    // =====================================================
    // COMPARAÇÃO DE UM ÚNICO ATRIBUTO ESCOLHIDO NO CÓDIGO
    // =====================================================
    
    //1 = População, 2 = Área, 3 = PIB, 4 = Densidade, 5 = PIB per capita
    int atributo = 3; // <-- Altere aqui o atributo que quer comparar

    printf("\n=== Comparação de Atributos ===\n");

    if (atributo == 1) {
        printf("Comparação de cartas (Atributo: População)\n");
        printf("Carta 1 - %s: %lu\n", nomecidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nomecidade2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 2) {
        printf("Comparação de cartas (Atributo: Área)\n");
        printf("Carta 1 - %s: %.2f km²\n", nomecidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nomecidade2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 3) {
        printf("Comparação de cartas (Atributo: PIB)\n");
        printf("Carta 1 - %s: %.2f bilhões\n", nomecidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões\n", nomecidade2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 4) {
        printf("Comparação de cartas (Atributo: Densidade Populacional)\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nomecidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nomecidade2, densidade2);

        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        else if (densidade2 < densidade1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 5) {
        printf("Comparação de cartas (Atributo: PIB per Capita)\n");
        printf("Carta 1 - %s: %.2f\n", nomecidade1, pibpercapita1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, pibpercapita2);

        if (pibpercapita1 > pibpercapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        else if (pibpercapita2 > pibpercapita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        else
            printf("Resultado: Empate!\n");
    }

    return 0;
    }


    