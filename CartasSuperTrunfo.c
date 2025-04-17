#include <stdio.h>

int main(){

printf("Carta 1\n");

    char estado1[3] = "A";
    char estado2[3] = "B";
    char codigo1[4] = {'0','1'};
    char codigo2[4] = {'0','2'};
    char cidade1[20] = "Barueri";
    char cidade2[20] = "Itapevi";
    int populacao1 = 316473.;
    int populacao2 = 232297.;
    float area1 = 65.701;
    float area2 = 82.65800;
    float pib1 = 57088.30158;
    float pib2 = 52656.00;
    int pontos_turisticos1 = 15;
    float densidade_populacional1 = (float)316.473 / 65.701; //Populaçao / Área
    float pib_per_capita1 = (float)57088.30158 / 316.473; //Pib / População

    int pontos_turisticos2 = 15;
    float densidade_populacional2 = (float)232.297 / 82.65800; //Populaçao / Área
    float pib_per_capita2 = (float)52656.00 / 232.297; //Pib / População

printf("Estado: %s\n", estado1);
printf("Código da Carta: %s%c%c\n", estado1, codigo1[0], codigo1[1]);
printf("Cidade: %s\n", cidade1);
printf("População: %.3d hab\n", populacao1);
printf("Área: %.3f km²\n", area1);
printf("PIB: R$ %.3f Bilhões de Reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontos_turisticos1);
printf("Densidade_Populacional: %f hab/km²\n",densidade_populacional1);
printf("Pib_per_Capita:R$ %.3f mil Reais\n", pib_per_capita1);

printf("\n\n");
printf("Carta 2\n");

printf("Estado: %s\n", estado2);
printf("Código da Carta: %s%c%c\n", estado2, codigo2[0], codigo2[1]);
printf("Cidade: %s\n", cidade2);
printf("População: %d hab\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: R$ %.2f Bilhões de Reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontos_turisticos2);
printf("Densidade_Populacional: %f hab/km²\n",densidade_populacional2);
printf("Pib_per_Capita:R$ %.3f mil Reais\n", pib_per_capita2);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
