#include <stdio.h>

int main()
{
    // variaveis destinadas para cada cidade, se referindo a 1 ou 2.
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char sigla1[50], sigla2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float PIB1, PIB2;
    float Densidade1, Densidade2;
    float Percapita1, Percapita2;
    float SuperPoder1, SuperPoder2;

    printf("        SUPER TRUNFO         \n");
    printf("");
    // entrada de dados para as variaveis.
    // lendo dados da variavel CARTA1
    printf("Informe a CARTA 1:\n");
    printf("Digite uma Letra de 'A' a 'H'(para representar seu ESTADO): ");
    scanf("%s", &estado1);

    // lendo variavel codigo1
    printf("Digite o codigo da carta(ex: 'H01', 'B03'): ");
    scanf("%s", &codigo1);

    // lendo variavel nomecidade1
    printf("Digite a SIGLA do seu ESTADO: ");
    scanf("%s", &sigla1);

    // lendo variavel populacao1
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao1);

    // lendo variavel area1
    printf("Informe a área da cidade em Km²: ");
    scanf("%f", &area1);

    // lendo variavel PIB1
    printf("Informe o PIB(Produto Interno Bruto): ");
    scanf("%f", &PIB1);

    // lendo variavel pontoturisticos1
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // calculo para a variavel percapita1
    Percapita1 = (float)PIB1 / populacao1;

    // calculo para variavel densidade1
    Densidade1 = (float)populacao1 / area1;

    // calculo para a variavel SuperPoder1
    SuperPoder1 = (float)populacao1 + pontosturisticos1 + area1 + PIB1 + Percapita1 + (1.0 / Densidade1);

    // lendo dados da variavel CARTA2
    printf("Informe a CARTA 2:\n");
    printf("Digite uma Letra de 'A' a 'H'(para representar seu ESTADO): ");
    scanf("%s", &estado2);

    // lendo variavel codigo2
    printf("Digite o codigo da carta(ex: 'H01', 'B03'): ");
    scanf("%s", &codigo2);

    // lendo variavel nomecidade2
    printf("Digite a SIGLA do seu ESTADO: ");
    scanf("%s", &sigla2);

    // lendo variavel populacao2
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao2);

    // lendo variavel area2
    printf("Informe a área da cidade em Km²: ");
    scanf("%f", &area2);

    // lendo variavel PIB2
    printf("Informe o PIB(Produto Interno Bruto): ");
    scanf("%f", &PIB2);

    // lendo variavel pontoturisticos2
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // calculo para variavel densidade2
    Densidade2 = (float)populacao2 / area2;

    // calculo para variavel percapita2
    Percapita2 = (float)PIB2 / populacao2;

    // calculo para a variavel SuperPoder1
    SuperPoder2 = (float)populacao2 + pontosturisticos2 + area2 + PIB2 + Percapita2 + (1.0 / Densidade2);

    // mostrando as informações dadas
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("CARTA 01\n");
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO: %s\n", codigo1);
    printf("SIGLA DA CIDADE: %s\n", sigla1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f Hab/km²\n", Densidade1);
    printf("PIB Per Capita: %.2f reais\n", Percapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);
    printf("\n");
    printf("\n");
    printf("CARTA 02\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("SIGLA DA CIDADE: %s\n", sigla2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f Hab/km²\n", Densidade2);
    printf("PIB Per Capita: %.2f reais\n", Percapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2, (pontosturisticos1 > pontosturisticos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (Densidade1 < Densidade2) ? 1 : 2, (Densidade1 < Densidade2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (Percapita1 > Percapita2) ? 1 : 2, (Percapita1 > Percapita2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, (SuperPoder1 > SuperPoder2) ? 1 : 0);

    return 0;
}