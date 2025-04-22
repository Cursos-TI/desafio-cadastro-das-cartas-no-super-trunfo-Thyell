#include <stdio.h>

int main(){

//informações das cartas:

    char estado1[3] = "A";
    char estado2[3] = "B";
    char codigo1[4] = {'0','1'};
    char codigo2[4] = {'0','2'};
    char cidadec1[20] = "Carta 1";
    char cidadec2[20] = "Carta 2";
    char cidade1[20] = "Barueri";
    char cidade2[20] = "Itapevi";
    unsigned long int populacao1 = 316473., populacao2 = 232297.;
    float area1 = 65.701, area2 = 82.658;
    float pib1 = 57088.30, pib2 = 52656.00;
    int pontos_turisticos1 = 15, pontos_turisticos2 = 14;
    float pib_per_capita1 = (float)57088.30 / 316.473, pib_per_capita2 = (float)52656.00 / 232.297; //Pib / População
    float densidade_populacional1 = (float)316.473 / 65.701, densidade_populacional2 = (float)232.297 / 82.658; //Populaçao / Área
    float superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + 1 / densidade_populacional1;
    float superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + 1 / densidade_populacional1;

printf("%s\n\n", cidadec1);
printf("Estado: %s\n", estado1);
printf("Código da Carta: %s%c%c\n", estado1, codigo1[0], codigo1[1]);
printf("Cidade: %s\n", cidade1);
printf("População: %.3lu hab\n", populacao1);
printf("Área: %.3f km²\n", area1);
printf("PIB: R$ %.3f Bilhões de Reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontos_turisticos1);
printf("Densidade Populacional: %f hab/km²\n",densidade_populacional1);
printf("Pib per Capita:R$ %.3f mil Reais\n", pib_per_capita1);
printf("Super Poder: %.2f\n\n", superPoder1);

printf("%s\n\n", cidadec2);
printf("Estado: %s\n", estado2);
printf("Código da Carta: %s%c%c\n", estado2, codigo2[0], codigo2[1]);
printf("Cidade: %s\n", cidade2);
printf("População: %lu hab\n", populacao2);
printf("Área: %.3f km²\n", area2);
printf("PIB: R$ %.2f Bilhões de Reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontos_turisticos2);
printf("Densidade Populacional: %f hab/km²\n",densidade_populacional2);
printf("Pib per Capita:R$ %.3f mil Reais\n", pib_per_capita2);
printf("Super Poder: %.2f\n\n", superPoder2);

printf("Comparação De Cartas:\n\n");

printf("População: %u\n", populacao1 > populacao2);
printf("Área: %d\n", area1 > area2);
printf("PIB: %d\n", pib1 > pib2);
printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
printf("PIB Per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
printf("Densidade Populacioanl: %d\n", densidade_populacional1 > densidade_populacional2);
printf("Super Poder: %d\n", superPoder1 > superPoder2);

return 0;

}
