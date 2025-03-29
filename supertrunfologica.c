#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    char Estado1 [2], Estado2 [2];
    char Codigo1 [3], Codigo2 [3];
    char Cidade1 [20], Cidade2 [20];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;
    float Densidade1, Densidade2;
    float Pibpercapita1, Pibpercapita2;
    float superpoder1, superpoder2;
    int opcao1, opcao2;
    int resultado1, resultado2;

    //Perguntas para a Carta 01
    printf("Carta 01\n");
    printf("Digite uma letra de 'A' a 'H' representando um dos oitos estados: ");
    scanf("%s", &Estado1);
       
    printf("Digite o código da carta entre as opções 01, 02 ou 03: ");
    scanf("%s", &Codigo1);  
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", &Cidade1);
        
    printf("Digite a sua População: ");
    scanf("%uld", &Populacao1); 
    
    printf("Informe a sua Área em km²: ");
    scanf("%f", &Area1);

    printf("Informe o seu PIB: ");
    scanf("%f", &PIB1);
    
    printf("Quantos pontos turísiticos existem na cidade: ");
    scanf("%d", &Pontos1);
    printf("\n");

    //Para calcular a Densidade Populacional deve-se dividir a População pela Área da cidade
    //Para calcular o PIB per Capita deve-se dividir o PIB pela População da cidade
    //Em ambos os cálculos, atenta-se para realizar a conversão explicita (Casting) da Variável "Populacao1" para float

    Densidade1 = (float) Populacao1 / Area1;
    Pibpercapita1 = (PIB1) / (float) Populacao1;
   
    //Perguntas para a Carta 02
    printf("Carta 02\n");
    printf("Digite uma letra de 'A' a 'H' representando um dos oito estados: ");
    scanf("%s", &Estado2);
    
    printf("Digite o código da carta entre as opções 01, 02 ou 03: ");
    scanf("%s", &Codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &Cidade2);
        
    printf("Digite a sua População: ");
    scanf("%uld", &Populacao2); 
    
    printf("Informe a sua Área em km²: ");
    scanf("%f", &Area2);
    
    printf("Informe o seu PIB: ");
    scanf("%f", &PIB2);
    
    printf("Quantos pontos turísiticos existem na cidade: ");
    scanf("%d", &Pontos2);
    printf("\n");

    Densidade2 = (float) Populacao2 / Area2;
    Pibpercapita2 = (PIB2) / (float) Populacao2;

    //Após respondido o questionário, o sistema exibirá os dados de ambas as cartas na sequência.

    printf("Carta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s%s\n", Estado1, Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %u\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2f\n", Pibpercapita1);

    //Para calcular o valor do "SUPER PODER" da "CARTA 01", deve-se somar os valores das variáveis...
    //... "Populacao1", "Area1", "PIB1", "Pontos1", "Pibpercapita1" e o inverso (*-1) da "Densidade1" 

    superpoder1 = (float)Populacao1 + Area1 + PIB1 + Pontos1 + Pibpercapita1 + (Densidade1 * -1);

    printf("SUPER PODER CARTA 01: %.f\n", superpoder1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s%s\n", Estado2, Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %u\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2f\n", Pibpercapita2);

    //Para calcular o valor do "SUPER PODER" da "CARTA 02", deve-se somar os valores das variáveis...
    //... "Populacao2", "Area2", "PIB2", "Pontos2", "Pibpercapita2" e o inverso (*-1) da "Densidade2"   

    superpoder2 = (float)Populacao2 + Area2 + PIB2 + Pontos2 + Pibpercapita2 + (Densidade2 * -1);

    printf("SUPER PODER CARTA 02: %.f\n", superpoder2);
    printf("\n");

    //Menu para iniciar jogo
    printf("***JOGO SUPER TRUNFO***\n");
    printf("**ATRIBUTOS**\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de Pontos Turísticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per Capita\n");
    printf("7.SUPER PODER\n");
    printf("\n");
    printf("Escolha um dos atributos das cidades para comparação: ");
    scanf("%d", &opcao1);
    printf("\n");

    switch (opcao1)
    {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s tem a população de %d habitantes\n", Cidade1, Populacao1);
            printf("%s tem a população de %d habitantes\n", Cidade2, Populacao2);            
            resultado1 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s tem a área de %.2f km²\n", Cidade1, Area1);
            printf("%s tem a área de %.2f km²\n", Cidade2, Area2);   
            resultado1 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s tem o PIB de R$ %.2f\n", Cidade1, PIB1);
            printf("%s tem o PIB de R$ %.2f\n", Cidade2, PIB2);
            resultado1 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            printf("%s tem %d Pontos Turísticos\n", Cidade1, Pontos1);
            printf("%s tem %d Pontos Turísticos\n", Cidade2, Pontos2);
            resultado1 = Pontos1 > Pontos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s tem a Densidade Populacional de %.2f hab/km²\n", Cidade1, Densidade1);
            printf("%s tem a Densidade Populacional de %.2f hab/km²\n", Cidade2, Densidade2);
            resultado1 = Densidade1 < Densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: PIB per Capita\n");
            printf("%s tem o PIB per Captita de R$ %.2f\n", Cidade1, Pibpercapita1);
            printf("%s tem o PIB per Captita de R$ %.2f\n", Cidade2, Pibpercapita2);
            resultado1 = Pibpercapita1 > Pibpercapita2 ? 1 : 0;
            break;
        case 7:
            printf("Atributo escolhido: SUPERPODER\n");
            printf("O SUPERPODER de %s é de %.f pontos\n", Cidade1, superpoder1);
            printf("O SUPERPODER de %s é de %.f pontos\n", Cidade2, superpoder2);
            resultado1 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        default:
            printf("opção inválida\n");
            break;

    }
    printf("\n");

    printf("Escolha um segundo atributo, diferente do primeiro escolhido, para uma segunda comparação: ");
    scanf("%d", &opcao2);
    printf("\n");

    //printf("***JOGO SUPER TRUNFO***\n");
    //printf("**ATRIBUTOS**\n");
    //printf("1.População\n");
    //printf("2.Área\n");
    //printf("3.PIB\n");
    //printf("4.Número de Pontos Turísticos\n");
    //printf("5.Densidade Populacional\n");
    //printf("6.PIB per Capita\n");
    //printf("7.SUPER PODER\n");
    //printf("\n");
    //printf("Escolha um segundo atributo, diferente do primeiro escolhido, para uma segunda comparação: ");
    //scanf("%d", &opcao2);
    //printf("\n");

    if (opcao1 == opcao2)
    {
        printf("Você escolheu o mesmo atributo\n");   
    } else {
        switch (opcao2)
        {
            case 1:
            printf("Atributo escolhido: População\n");
            printf("%s tem a população de %d habitantes\n", Cidade1, Populacao1);
            printf("%s tem a população de %d habitantes\n", Cidade2, Populacao2);            
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s tem a área de %.2f km²\n", Cidade1, Area1);
            printf("%s tem a área de %.2f km²\n", Cidade2, Area2);   
            resultado2 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s tem o PIB de R$ %.2f\n", Cidade1, PIB1);
            printf("%s tem o PIB de R$ %.2f\n", Cidade2, PIB2);
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            printf("%s tem %d Pontos Turísticos\n", Cidade1, Pontos1);
            printf("%s tem %d Pontos Turísticos\n", Cidade2, Pontos2);
            resultado2 = Pontos1 > Pontos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s tem a Densidade Populacional de %.2f hab/km²\n", Cidade1, Densidade1);
            printf("%s tem a Densidade Populacional de %.2f hab/km²\n", Cidade2, Densidade2);
            resultado2 = Densidade1 < Densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: PIB per Capita\n");
            printf("%s tem o PIB per Captita de R$ %.2f\n", Cidade1, Pibpercapita1);
            printf("%s tem o PIB per Captita de R$ %.2f\n", Cidade2, Pibpercapita2);
            resultado2 = Pibpercapita1 > Pibpercapita2 ? 1 : 0;
            break;
        case 7:
            printf("Atributo escolhido: SUPERPODER\n");
            printf("O SUPERPODER de %s é de %.f pontos\n", Cidade1, superpoder1);
            printf("O SUPERPODER de %s é de %.f pontos\n", Cidade2, superpoder2);
            resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        default:
            printf("opção inválida\n");
            break;
        }
        printf("\n");



        if (resultado1 && resultado2)
        {
            printf("***%s Venceu***\n", Cidade1);
        } 
        else if (resultado1 != resultado2) 
        {
            printf("***EMPATE***\n");
        }
        else
        {
            printf("***%s Venceu***\n", Cidade2);
        }

    }




}