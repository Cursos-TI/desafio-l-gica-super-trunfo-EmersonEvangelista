#include <stdio.h> 

int main(){
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[5];
    char cidade1[30], cidade2[30];
    float super1, super2;
    float comppopulacao, comparea, comppib, compdensind, comppercapita,compsuper;
    float populacao1, populacao2;
    float area1, area2, densidade1, percapita1;
    float pib1, pib2, densidade2, percapita2;
    int turistico1, turistico2,compturist;

    //Bloco de código direcionado para configuração de dados que serão inseridos 
    //pelos usuários

    printf("\nCARTA 01\n");

    printf("DIGITE O NOME DO ESTADO: \n");
    scanf("%s", estado1);

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", codigo1);

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", cidade1);

    printf("QUAL A POPULAÇÃO DA CIDADE: \n");
    scanf("%f", &populacao1);

    printf("QUAL A ÁREA EM KM² DA CIDADE: \n");
    scanf("%f", &area1);

    printf("QUAL O PIB DA CIDADE: \n");
    scanf("%f", &pib1);

    printf("QUANTOS PONTOS TURISTICOS TEM NA CIDADE: \n");
    scanf("%d", &turistico1);

    printf("\nCARTA 02\n");

    printf("DIGITE O NOME DO ESTADO: \n");
    scanf("%s", estado2);

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", codigo2);

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", cidade2);

    printf("QUAL A POPULAÇÃO DA CIDADE: \n");
    scanf("%f", &populacao2);

    printf("QUAL A ÁREA EM KM² DA CIDADE: \n");
    scanf("%f", &area2);

    printf("QUAL O PIB DA CIDADE: \n");
    scanf("%f", &pib2);

    printf("QUANTOS PONTOS TURISTICOS TEM NA CIDADE: \n");
    scanf("%d", &turistico2);

    //Esse bloco de código abaixo é dedicado para o cáculo
    //da densidade demográfica e PIB Per capita.

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    percapita1 = (float)pib1 / populacao1;
    percapita2 = (float)pib2 / populacao2;

    //Bloco dedicado para o cáculo do super poder;

    /*super1 = (float)populacao1 + area1 + pib1 + turistico1 + densidade1 + percapita1;
    super2 = (float)populacao2 + area2 + pib2 + turistico2 + densidade2 + percapita2;*/
    
    //Bloco utilizado para comparação entre as cartas;

    /*comppopulacao = (float) populacao1 > populacao2;
    comparea = (float) area1 > area2;
    comppib = (float) pib1 > pib2;
    compturist = turistico1 > turistico2;
    comppercapita = (float) percapita1 > percapita2;
    compdensind = (float) densidade1 < densidade2;
    compsuper = (float) super1 > super2;
    */

    //Bloco exclusivo para configuração das informações que serão exebidas.

    printf("\nCARTA 01\n");

    printf("ESTADO: %s \n", estado1);
    printf("CÓDIGO: %s \n", codigo1);
    printf("CIDADE: %s \n", cidade1);
    printf("POPULAÇÃO: %f \n", populacao1);
    printf("ÁREA EM KM²: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("PONTOS TURÍSTICOS: %d \n", turistico1);
    printf("DENSIDADE POPULACIONAL: %f \n", densidade1);
    printf("PIB PER CAPITA: %f \n", percapita1);


    printf("\nCARTA 02\n");

    printf("ESTADO: %s \n", estado2);
    printf("CÓDIGO: %s \n", codigo2);
    printf("CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %f \n", populacao2);
    printf("ÁREA EM KM²: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("PONTOS TURÍSTICOS: %d \n", turistico2);
    printf("DENSIDADE POPULACIONAL: %f \n", densidade2);
    printf("PIB PER CAPITA: %f \n", percapita2);


    //Bloco dedicado para exebição dos resultados das comparações;

    /*printf("\n COMPARAÇÃO DE CARTAS:\n");
    printf("POPULAÇÃO: CARTA01 (%.2f) > CARTA02 (%.2f) = %.2f \n", populacao1, populacao2, comppopulacao);
    printf("ÁREA: CARTA01 (%.2f) > CARTA02 (%.2f) = %.2f \n", area1, area2, comparea);
    printf("PIB: CARTA01 (%.2f) > CARTA02 (%.2f) = %.2f \n", pib1, pib2, comppib);
    printf("PONTOS TURISTICOS: CARTA01 (%d) > CARTA02 (%d) = %d \n", turistico1, turistico2, compturist);
    printf("DESIDADE: CARTA01 (%.2f) < CARTA02 (%.2f) = %.2f \n", densidade1, densidade2, compdensind);
    printf("PIB PER CAPITA: CARTA01 (%.2f) > CARTA02 (%.2f) = %.2f \n", percapita1, percapita2, comppercapita);
    printf("SUPER PODER: CARTA01 (%.2f) > CARTA02 (%.2f) = %.2f \n", super1, super2, compsuper);*/

    //Estrutura de decisão composta if/else;

    if (pib1 > pib2){
        printf("\nCOMPARAÇÃO DE CARTAS (ATIBUTO:PIB)");
        printf("\nCARTA01 PIB: %f\nCARTA02 PIB: %f\n RESULTADO: CARTA01 É A VENCEDORA ", pib1, pib2);
    } else {
         printf("CARTA01 PIB: %f\n CARTA02 PIB: %f\n RESULTADO: CARTA02 É A VENCEDORA ", pib1, pib2);
    } 


}