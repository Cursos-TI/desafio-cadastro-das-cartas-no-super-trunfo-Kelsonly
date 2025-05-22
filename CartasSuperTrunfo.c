#include <stdio.h>

int main (){ 
    
    // Declaração de Variáveis das duas cartas:

    char Estado[12], Estado2[12]; 
    int Numero, Numero2;
    char Cidade[100], Cidade2[100];
    int Populacao, Populacao2;
    int Area, Area2;
    int PIB , PIB2;
    int Turismo, Turismo2;

        
    //O "printf" é a função que indica o que será impresso e solicitado ao usuário. O "scanf é a função que escaneia a resposta do usuário".
    //Aqui podemos ver também os especificadores de formatos e os tipos de variáveis correspondentes.
    
    //Carta 1
    printf("DESAFIO SUPER TRUNFO NOVATO\n");
    printf("Carta 1\n"); //Indica a ordem das cartas.

    printf("Digite uma letra de 'A' a 'H' representando um estado: \n"); 
    scanf("%s", &Estado);   //s para Char

    printf("Digite o número da carta: \n"); 
    scanf("%d", &Numero);  //d para inteiro

    printf("Digite o nome da Cidade: \n"); 
    scanf("%s", &Cidade);

    printf("Digite o numero de habitantes da Cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da Cidade em quilômetros quadrados: \n");
    scanf("%d", &Area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%d", &PIB);

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
    scanf("%d", &Populacao2);

    printf("Digite a area da Cidade em quilômetros quadrados: \n");
    scanf("%d", &Area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%d", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo2);


    //Impressão dos Resultados: 
    //Aqui colocamos os especificadores de formato e as variáveis de cada um deles para serem impressos os valores correspondentes.
    //Carta 1
    printf("***CARTA 1***");
    printf("*************\n");
    printf("Estado: %s \n", Estado);
    printf("Numero da Carta: %d \n", Numero);
    printf("Código da Carta: %s %d \n", Estado, Numero);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("Número de habitantes da Cidade: %d \n", Populacao);
    printf("Área da Cidade: %d Km² \n", Area);
    printf("PIB da Cidade: %d \n", PIB);
    printf("Número de pontos turísticos: %d \n", Turismo);
    
    //Carta 2
    printf("***CARTA 2***");
    printf("*************\n");
    printf("Estado: %s \n", Estado2);
    printf("Numero da Carta: %d \n", Numero2);
    printf("Código da Carta: %s %d \n", Estado2, Numero2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("Número de habitantes da Cidade: %d \n", Populacao2);
    printf("Área da Cidade: %d Km² \n", Area2);
    printf("PIB da Cidade: %d \n", PIB2);
    printf("Número de pontos turísticos: %d \n", Turismo2);

    return 0;
}