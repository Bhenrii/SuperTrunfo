#include <stdio.h>

int main()
{
    // variaveis destinadas para cada cidade, se referindo a 1 ou 2.
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char sigla1[50], sigla2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    int opcao1, opcao2;
    int resultado1 = 0, resultado2 = 0;
    float area1, area2;
    float PIB1, PIB2;
    float Densidade1, Densidade2;
    float Percapita1, Percapita2;
    float v1_a1, v2_a1, v1_a2, v2_a2;
    double SuperPoder1, SuperPoder2;

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
    scanf("%lu", &populacao2);

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
    printf("Super Poder: %8.2lf\n", SuperPoder1);
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
    printf("Super Poder: %8.2lf\n", SuperPoder2);

    // menu interativo com todos atributos, para comparação
    printf("\nComparação de Atributos:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha o 1° atributo para Comparação: \n");
    scanf("%d", &opcao1);

    // adicionando atributo para variavel opcao1
    switch (opcao1)
    {
    case 1:
        v1_a1 = populacao1;
        v2_a1 = populacao2;
        break;
    case 2:
        v1_a1 = area1;
        v2_a1 = area2;
        break;
    case 3:
        v1_a1 = PIB1;
        v2_a1 = PIB2;
        break;
    case 4:
        v1_a1 = pontosturisticos1;
        v2_a1 = pontosturisticos2;
        break;
    case 5:
        v1_a1 = Densidade1;
        v2_a1 = Densidade2;
        break;
    case 6:
        v1_a1 = Percapita1;
        v2_a1 = Percapita2;
        break;
    case 7:
        v1_a1 = SuperPoder1;
        v2_a1 = SuperPoder2;
        break;
    }

    // menu interativo com todos atributos, para comparação
    printf("\nComparação de Atributos:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha 2° atributo para Comparação: \n");
    scanf("%d", &opcao2);

    // adicionando atributo para variavel opcao2
    if (opcao2 == opcao1)
    {
        printf("Opção já registrada.\n");
    }
    else
    {
        switch (opcao2)
        {
        case 1:
            v1_a2 = populacao1;
            v2_a2 = populacao2;
            break;
        case 2:
            v1_a2 = area1;
            v2_a2 = area2;
            break;
        case 3:
            v1_a2 = PIB1;
            v2_a2 = PIB2;
            break;
        case 4:
            v1_a2 = pontosturisticos1;
            v2_a2 = pontosturisticos2;
            break;
        case 5:
            v1_a2 = Densidade1;
            v2_a2 = Densidade2;
            break;
        case 6:
            v1_a2 = Percapita1;
            v2_a2 = Percapita2;
            break;
        case 7:
            v1_a2 = SuperPoder1;
            v2_a2 = SuperPoder2;
            break;
        }
        // mostrando o atributo escolhido e as informações das cartas
        if (v1_a1 == populacao1)
        {
            printf("Carta 1: %s    -     Carta2: %s\n", sigla1, sigla2);
            printf("1° Atributo escolhido: População\n");
            printf("Carta 1 valor: %d  -  Carta 2 Valor: %d\n", populacao1, populacao2);
        }
        else if (v1_a1 == area1)
        {
            printf("Carta 1: %s    -     Carta2: %s\n", sigla1, sigla2);
            printf("1° Atributo escolhido: Área\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", area1, area2);
        }
        else if (v1_a1 == PIB1)
        {
            printf("Carta 1: %s    -     Carta2: %s\n", sigla1, sigla2);
            printf("1° Atributo escolhido: PIB\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", PIB1, PIB2);
        }
        else if (v1_a1 == pontosturisticos1)
        {
            printf("Carta 1: %s    -     Carta2: %s\n", sigla1, sigla2);
            printf("1° Atributo escolhido: Pontos Turisticos\n");
            printf("Carta 1 valor: %d  -  Carta 2 Valor: %d\n", pontosturisticos1, pontosturisticos2);
        }
        else if (v1_a1 == Densidade1)
        {
            printf("Carta 1: %s    -     Carta2: %s\n", sigla1, sigla2);
            printf("1° Atributo escolhido: Densidade Populacional\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", Densidade1, Densidade2);
        }
        else if (v1_a1 == Percapita1)
        {
            printf("Carta 1: %s    -     Carta2: %s\n", sigla1, sigla2);
            printf("1° Atributo escolhido: Percapita\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", Percapita1, Percapita2);
        }
        else if (v1_a1 == SuperPoder1)
        {
            printf("Carta 1: %s    -     Carta2: %s\n", sigla1, sigla2);
            printf("1° Atributo escolhido: Super Poder\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", SuperPoder1, SuperPoder2);
        }

        // mostrando o atributo escolhido e as informações das cartas
        if (v1_a2 == populacao1)
        {
            printf("2° Atributo escolhido: População\n");
            printf("Carta 1 valor: %d  -  Carta 2 Valor: %d\n", populacao1, populacao2);
        }
        else if (v1_a2 == area1)
        {
            printf("2° Atributo escolhido: Área\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", area1, area2);
        }
        else if (v1_a2 == PIB1)
        {
            printf("2° Atributo escolhido: PIB\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", PIB1, PIB2);
        }
        else if (v1_a2 == pontosturisticos1)
        {
            printf("2° Atributo escolhido: Pontos Turisticos\n");
            printf("Carta 1 valor: %d  -  Carta 2 Valor: %d\n", pontosturisticos1, pontosturisticos2);
        }
        else if (v1_a2 == Densidade1)
        {
            printf("2° Atributo escolhido: Densidade Populacional\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", Densidade1, Densidade2);
        }
        else if (v1_a2 == Percapita1)
        {
            printf("2° Atributo escolhido: Percapita\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", Percapita1, Percapita2);
        }
        else if (v1_a2 == SuperPoder1)
        {
            printf("2° Atributo escolhido: Super Poder\n");
            printf("Carta 1 valor: %.2f  -  Carta 2 Valor: %.2f\n", SuperPoder1, SuperPoder2);
        }

        //logica para calculo e resultado da carta que ganhou
        if (v1_a1 == Densidade1 || v1_a2 == Densidade1)
        {
            if (Densidade1 < Densidade2)
            {
                resultado1++;
            }
            else
                {
                    resultado2++;
                }
        
        }
        else if (v1_a1 > v2_a1 && v1_a2 > v2_a2)
        {
            resultado1++;
        }
        else if (v1_a1 < v2_a1 && v1_a2 < v2_a2)
        {
            resultado2++;
        }

        //mostrando resultado da carta que ganhou
        if (resultado1 == 1 && resultado2 == 0)
        {
            printf("Carta 1 venceu!");
        }
        else if (resultado2 == 1 && resultado1 == 0)
        {
            printf("Carta 2 Venceu!");
        }
        else
        {
            printf("A comparação dos atributos deu EMPATE!");
        }
    }

    return 0;
}