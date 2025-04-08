//inclusao de biblioteca
#include<stdio.h>
// inicio da funcao

int main(){
// declaracao de variaveis
    char estado[20], codigo[5], nome[20], estado1[20], codigo1[5], nome1[20];// definindo variaveis que possuem caracteres
    int pontos, pontos1;//variaveis compostas por numeros inteiros
    unsigned int populacao, populacao1;//variavel composta por numeros inteiros sem sinal
    float area, pib, area1, pib1, superpoder, superpoder1;
    double per_capta, densidade, per_capta1, densidade1, densidade0, densidade01; //variaveis de numeros decimais
// entrada de dados do usuario - carta 1
    printf("Ola, Usuario! Voce pode escoher entre os estados: A, B, C, D, E, F, G, H\n");
    printf("Insira a letra correspondente ao seu Estado: \n");//solicitando dados ao usuarios
    scanf(" %c", &estado[0]);// salvando as informações

    printf("O seu codigo corresponde a: inicial do Estado escolhido seguido de numeros entre 01 e 04!\n");
    printf("Insira o codigo correspondente: \n");
    scanf("%s", codigo);

    printf("Insira o nome da cidade escolhida: \n");
    scanf("%s", nome);

    printf("Insira o numero total da populacao: \n");
    scanf("%d", &populacao);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Insira a area total: \n");
    scanf("%f", &area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);

    

// entrada de dados - carta 2
    printf("Ola, Usuario! Voce pode escolher entre os estados: A, B, C, D, E, F, G, H\n");
    printf("Insira a letra correspondente ao seu Estado: \n");
    scanf(" %c", &estado1[0]);

    printf("O seu codigo corresponde a: inicial do Estado escolhido seguido de numeros entre 01 e 04!\n");
    printf("Insira o codigo correspondente: \n");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade escolhida: \n");
    scanf("%s", nome1);

    printf("Insira o numero total da populacao: \n");
    scanf("%d", &populacao1);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos1);

    printf("Insira a area total: \n");
    scanf("%f", &area1);

    printf("Insira o PIB: \n\n");
    scanf("%f", &pib1);
// saida de dados carta 1
    printf("carta 1:\n");

    printf("Estado : %c\nCodigo : %s\n", estado[0], codigo);

    printf("O nome do Estado: %s\n", nome);

    printf("A populacao total:%d\n", populacao);

    printf("Pontos turIstico: %d\n", pontos);

    printf("Area total: %.2f\n", area);
    
    printf("PIB: %.2f\n", pib);

    //calculo do PIB per capita
    per_capta = pib/populacao;
    printf("PIB per capita: %.2f\n", per_capta);

    //calcular densidade populacional
    densidade = populacao/area;
    printf("Densidade populacional: %.2f\n", densidade);

    // calcular o inverso da densidade
    densidade0 = 1/densidade;

    // calculando super poder da carta 1
    superpoder = populacao + area + pib + pontos + per_capta + densidade0;
    printf("Super poder: %.2f\n\n", superpoder);

    
//saida de dados carta 2
    printf("carta 2:\n");

    printf("Estado : %c\nCodigo : %s\n", estado1[0], codigo1);

    printf("O nome do Estado : %s\n", nome1);

    printf("A populacao total : %d\n", populacao1);

    printf("Pontos turIstico : %d\n", pontos1);

    printf("Area total : %.2f\n", area1);
    
    printf("PIB : %.2f\n", pib1);

    //calculo do PIB per capita
    per_capta1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", per_capta1);
    //calcular densidade populacional
    densidade1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", densidade1);
    //inverso da densidade
    densidade01 = 1/densidade1;
    // calculando super poder da carta 2
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + per_capta1 + densidade01;
    printf("Super poder: %.2f\n", superpoder1);
    
    //mensagem explicando a jogabilidade do jogo
    printf("Os numeros 1 irao representar a vitoria da carta 1 e os numeros 0 a vitoria da carta 2\n\n");

    //  Comparando valores
    int resultado1 = populacao > populacao1;


    pontos > pontos1;
    int resultado2 = pontos > pontos1;

    area > area1;
    int resultado3 = area > area1;

    pib > pib1;
    int resultado4 = pib > pib1;

    per_capta > per_capta1;
    int resultado5 = per_capta > per_capta1;

    densidade < densidade1;
    int resultado6 = densidade < densidade1;
    
    superpoder > superpoder1;
    int resultado7 = superpoder > superpoder1;

    printf("Resultado da comparacao de populacao: %d\n", resultado1);
    printf("Resultado da comparacao de pontos turisticos: %d\n", resultado2);
    printf("Resultado da comparacao de area: %d\n", resultado3);
    printf("Resultado da comparacao de PIB: %d\n", resultado4);
    printf("Resultado da comparacao de PIB per capita: %d\n", resultado5);
    printf("Resultado da comparacao de densidade: %d\n", resultado6);
    printf("Resultado da comparacao de super poder: %d\n", resultado7);

    printf("O numero que mais apareceu e o vencedor! Parabens!\n\n");


// encerrando com sucesso
    return 0;

}