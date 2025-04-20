#include <stdio.h>


int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomedacidade1[50];
    int pop1;
    float area1;
    float pib1;
    int pont;

    // Carta 2
char estado2;
char codigo2[4];
char nomedacidade[50];
int pop2;
float area2;
float pib2;
int pont2;

// Entrada de dados de Carta1
printf("\nCarta 1:\n");
printf("Digite a letra do estado:");
scanf(" %c", &estado1);

printf("Qual codigo da carta:");
scanf("%s", &codigo1);

printf("Digite o nome da cidade:");
scanf(" %[^\n]", &nomedacidade1);

printf("Digite o numero da população:");
scanf("%d", &pop1);

printf("Digite o tamanho da area:");
scanf("%f", &area1 );

printf("Digite o numero do PIB:");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos:");
scanf("%d", &pont);

// Cartas numero 2

printf("\nCarta 2:\n");
printf("Qual a letra do estado:");
scanf(" %c", &estado2);

printf("Qual o codigo da carta:");
scanf("%s", &codigo2);

printf("Qual nome da cidade:");
scanf(" %[^\n]", &nomedacidade);

printf("Digite o numero da população:");
scanf("%d", &pop2);

printf("Digite a area:");
scanf("%f", &area2);

printf("Digite o PIB:");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos:");
scanf("%d", &pont2);

// exibição
printf("\n--- Resutado Final ---\n");

printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomedacidade1);
printf("População: %d\n", pop1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de pontos turisticos: %d\n", pont);


printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", pop2);
printf("Área: %.2f km²\n",area2);
printf("PIB: %.2f, bilhões de reais\n",pib2);
printf("Número de pontos turisticos: %d\n", pont2);
    return 0;
}
