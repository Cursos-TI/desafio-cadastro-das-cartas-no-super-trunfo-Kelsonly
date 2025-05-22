#include <stdio.h>

int main (){ 
    
    // Declaração de Variáveis das duas cartas:

    char Estado[12], Estado2[12]; 
    int Numero, Numero2;
    unsigned int Populacao, Populacao2;
    char Cidade[1000], Cidade2[1000];
    float Area, Area2;
    float PIB , PIB2;
    int Turismo, Turismo2;
    float Densidadepopulacional, PIBpercapita;
    float Densidadepopulacional2, PIBpercapita2, Densidadepopulacionalinversa, Densidadepopulacionalinversa2;
    float Superpoder, Superpoder2;
    unsigned int Resultadonumerodehabitantes, Resultadoarea, ResultadoPIB, Resultadoturismo, Resultadopopulacao, Resultadodensidadepopulacional, ResultadoPIBpcapita, Resultadosuperpoder;
    
    //O "printf" é a função que indica o que será impresso e solicitado ao usuário. O "scanf é a função que lê a resposta do usuário".
    //Aqui podemos ver também os especificadores de formatos e os tipos de variáveis correspondentes.
    
    //Carta 1
    
    printf("Carta 1\n"); //Indica a ordem das cartas.

    printf("Digite uma letra de 'A' a 'H' representando um estado: \n"); 
    scanf("%s", &Estado);

    printf("Digite o número da carta: \n"); 
    scanf("%d", &Numero);

    printf("Digite o nome da Cidade: \n"); 
    scanf("%s", &Cidade);

    printf("Digite o numero de habitantes da Cidade: \n");
    scanf("%u", &Populacao);

    printf("Digite a área da Cidade em quilômetros quadrados: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo);


    //Carta 2
    
    printf("Carta 2 \n");

    printf("Digite uma letra de 'A' a 'H' representando um estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o número da carta: \n");
    scanf("%d", &Numero2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite o numero de habitantes da Cidade: \n");
    scanf("%u", &Populacao2);

    printf("Digite a area da Cidade em quilômetros quadrados: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo2);

    //Operação matemática para calcular a Densidade Ppopulacional e o PIB per Capita de cada carta:

    Densidadepopulacional = (float) Populacao/Area;  //Conversão explícita da População e da área de int para float no resultado.
    Densidadepopulacional2 = (float) Populacao2/Area2; 
    PIBpercapita = (float) PIB/Populacao;  //Conversão explícita da PIB e da área de int para float no resultado.
    PIBpercapita2 = (float) PIB2/Populacao2;
    
    Densidadepopulacionalinversa = 1 / Densidadepopulacional;
    Densidadepopulacionalinversa2 = 1 / Densidadepopulacional2;
    Superpoder  = (float) Populacao + Area + PIB + Turismo + Densidadepopulacionalinversa+ PIBpercapita;
    Superpoder2 = (float) Populacao2 + Area2 + PIB2 + Turismo2 + Densidadepopulacionalinversa2 + PIBpercapita2; 
    
    
    Resultadonumerodehabitantes = (int) Populacao > Populacao2;
    Resultadoarea = (int) Area > Area2; 
    ResultadoPIB = (int) PIB > PIB2; 
    Resultadoturismo = (int)Turismo > Turismo2;
    Resultadodensidadepopulacional = (int) Densidadepopulacional < Densidadepopulacional2; //A densidade populacionalé inversa porque quanto menor a população melhor
    ResultadoPIBpcapita = (int)PIBpercapita > PIBpercapita2;
    Resultadosuperpoder = (int)Superpoder > Superpoder2;

    

    //Impressão dos Resultados:
    //Carta 1
    printf("***CARTA 1***");
    printf("*************\n");
    printf("Estado: %s \n", Estado);
    printf("Numero da Carta: %d \n", Numero);
    printf("Código da Carta: %s %d \n", Estado, Numero);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("Número de habitantes da Cidade: %u \n", Populacao);
    printf("Área da Cidade: %.2f Km2 \n", Area);
    printf("PIB da Cidade: %.2f Reais\n", PIB);
    printf("Número de pontos turísticos: %d \n", Turismo);
    printf("Densidade Populacional : %.2f hab/km2\n", Densidadepopulacional);
    printf("PIB per Capita da Cidade é: %.2f Reais\n", PIBpercapita);
    printf("O Super Poder tem o valor de: %.2f\n", Superpoder);
    
    //Carta 2
    printf("***CARTA 2***");
    printf("*************\n");
    printf("Estado: %s \n", Estado2);
    printf("Numero da Carta: %d \n", Numero2);
    printf("Código da Carta: %s %d \n", Estado2, Numero2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("Número de habitantes da Cidade: %u \n", Populacao2);
    printf("Área da Cidade: %.2f Km2 \n", Area2);
    printf("PIB da Cidade: %.2f Reais\n", PIB2);
    printf("Número de pontos turísticos: %d \n", Turismo2);
    printf("Densidade Populacional : %.2f hab/km2 \n", Densidadepopulacional2);
    printf("PIB per Capita da Cidade é: %.2f Reais \n", PIBpercapita2);
    printf("O Super Poder tem o valor de: %.2f\n", Superpoder2);


    printf("***COMPARAÇÃO DE CARTAS:***\n");
    printf("***************************\n");
    printf("1 indica Verdadeiro\n");
    printf("0 indica Falso\n");

    printf("População: Carta 1 venceu (%d)\n", Resultadonumerodehabitantes);
    printf("Area: Carta 1 venceu (%d)\n", Resultadoarea);
    printf("PIB: Carta 1 venceu (%d)\n", ResultadoPIB);
    printf("Turismo: Carta 1 venceu (%d)\n", Resultadoturismo);
    printf("Densidade Populacional: Carta 1 venceu (%d) \n", Resultadodensidadepopulacional); //Inversa
    printf("PIB per Capita: Carta 1 venceu (%d)\n", ResultadoPIBpcapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", Resultadosuperpoder); 
    return 0;


}
