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
    printf("População: %lu\n", populacao1);
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
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos tuísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder2);
    


    //=============================
    // Menu interativo de comparação
    //=============================
    
    int opcao;
    printf("\n#### MENU DE COMPARAÇÃO ####\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu milhões de habitantes\n%s: %lu habitantes\n", nomecidade1, populacao1, nomecidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomecidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n%s: %.2f km²\n", nomecidade1, area1, nomecidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomecidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n%s: %.2f bilhões\n", nomecidade1, pib1, nomecidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomecidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos turísticos\n%s: %d pontos\n", nomecidade1, pontost1, nomecidade2, pontost2);
            if (pontost1 > pontost2)
                printf("Vencedor: %s\n", nomecidade1);
            else if (pontost2 > pontost1)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Populacional (menor vence):\n");
            printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomecidade1, densidade1, nomecidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nomecidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2f\n%s: %.2f\n", nomecidade1, pibpercapita1, nomecidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2)
                printf("Vencedor: %s\n", nomecidade1);
            else if (pibpercapita2 > pibpercapita1)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Comparando Super Poder:\n");
            printf("%s: %.2f\n%s: %.2f\n", nomecidade1, superpoder1, nomecidade2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("Vencedor: %s\n", nomecidade1);
            else if (superpoder2 > superpoder1)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
    }


    