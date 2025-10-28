#include <stdio.h>


    //===================//
    // Dados da carta 1 //
    //=================//

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
    
    //===================//
    // Dados da carta 2 //
    //=================//

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

    //=====================================//    
    //Cadastro das informações da carta 1 //
    //===================================//

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

    //==========================//
    // Cálculos para a Carta 1 //
    //========================//

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 *1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontost1 + pibpercapita1 + (1.0 / densidade1);

    //=====================================//
    // Cadastro das informações da carta 2//
    //===================================//
    
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

    //========================//
    // Cálculos para a Carta 2//
    //========================//

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontost2 + pibpercapita2 + (1.0 / densidade2);
    
   //==========================================//
   //Menu de comparação de multiplos atributos//
   //========================================//

   int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;

    printf("\n#### MENU DE COMPARAÇÃO ####\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &atributo1);

    //=====================================================//
    // Armazena o valor do primeiro atributo de cada carta//
    //===================================================//

    switch (atributo1) {
        case 1: 
        valor1_c1 = populacao1; valor1_c2 = populacao2; 
        break;
        case 2:
        valor1_c1 = area1; valor1_c2 = area2; 
        break;
        case 3: 
        valor1_c1 = pib1; valor1_c2 = pib2;
        break;
        case 4: 
        valor1_c1 = pontost1; valor1_c2 = pontost2;
        break;
        case 5: 
        valor1_c1 = densidade1; valor1_c2 = densidade2;
        break;
        case 6:
        valor1_c1 = pibpercapita1; valor1_c2 = pibpercapita2;
        break;
        case 7:
        valor1_c1 = superpoder1; valor1_c2 = superpoder2; 
        break;

        default: printf("Opção inválida!\n"); return 0;
    }

    //==========================//
    // Segundo menu (dinâmico) //
    //========================//

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Número de Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Populacional\n");
    if (atributo1 != 6) printf("6 - PIB per Capita\n");
    if (atributo1 != 7) printf("7 - Super Poder\n");
    printf("Escolha o SEGUNDO atributo: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Você escolheu o mesmo atributo duas vezes! Encerrando...\n");
        return 0;
    }

    switch (atributo2) {
        case 1: 
        valor2_c1 = populacao1; valor2_c2 = populacao2; 
        break;
        case 2: 
        valor2_c1 = area1; valor2_c2 = area2; 
        break;
        case 3: 
        valor2_c1 = pib1; valor2_c2 = pib2; 
        break;
        case 4: 
        valor2_c1 = pontost1; valor2_c2 = pontost2; 
        break;
        case 5: 
        valor2_c1 = densidade1; valor2_c2 = densidade2; 
        break;
        case 6: 
        valor2_c1 = pibpercapita1; valor2_c2 = pibpercapita2; 
        break;
        case 7: 
        valor2_c1 = superpoder1; valor2_c2 = superpoder2; 
        break;
        
        default: 
        printf("Opção inválida!\n"); return 0;
    }

    printf("\n=== COMPARAÇÃO ===\n");
    printf("%-15s | Atributo 1: %.2f | Atributo 2: %.2f\n", nomecidade1, valor1_c1, valor2_c1);
    printf("%-15s | Atributo 1: %.2f | Atributo 2: %.2f\n", nomecidade2, valor1_c2, valor2_c2);


    //=====================//
    // Soma dos atributos //
    //===================//

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomecidade1, soma1);
    printf("%s: %.2f\n", nomecidade2, soma2);

    //=============================================================//
    // Comparação individual com regra da densidade (menor vence) //
    //===========================================================//

    int dens1 = (atributo1 == 5);
    int dens2 = (atributo2 == 5);
    int pontos1 = 0, pontos2 = 0;

    (dens1) ? 
        (valor1_c1 < valor1_c2 ? pontos1++ : (valor1_c1 > valor1_c2 ? pontos2++ : 0)) :
        (valor1_c1 > valor1_c2 ? pontos1++ : (valor1_c1 < valor1_c2 ? pontos2++ : 0));

    (dens2) ? 
        (valor2_c1 < valor2_c2 ? pontos1++ : (valor2_c1 > valor2_c2 ? pontos2++ : 0)) :
        (valor2_c1 > valor2_c2 ? pontos1++ : (valor2_c1 < valor2_c2 ? pontos2++ : 0));

    printf("\nResultados individuais:\n");
    printf("%s venceu em %d atributo(s).\n", nomecidade1, pontos1);
    printf("%s venceu em %d atributo(s).\n", nomecidade2, pontos2);

    printf("\n=== RESULTADO FINAL ===\n");
    if (soma1 > soma2)
        printf(" %s Venceu a rodada!\n", nomecidade1);
    else if (soma2 > soma1)
        printf(" %s Venceu a rodada!\n", nomecidade2);
    else
        printf("Empate!\n");

    return 0;
    }


    