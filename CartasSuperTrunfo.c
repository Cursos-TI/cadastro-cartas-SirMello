#include <stdio.h>


// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 printf ("Super Trunfo - Países\n\n"); 
 
   // Área para definição das variáveis para armazenar as propriedades das cidades

   //VARIÁVEIS DA CARTA 1

    char est1;
    char cod1[3];
    char cid1[20];
    int pop1;
    float area1;
    float pib1;
    int pts1;

    char est2;
    char cod2[3];
    char cid2[20];
    int pop2;
    float area2;
    float pib2;
    int pts2;
 

    //CARTA 01 -ENTRADA DE DADOS-

printf ("INSIRA OS DADOS DA PRIMEIRA CARTA\n\n");

printf ("DIGITE A 1°LETRA DO ESTADO: ");
scanf (" %c", &est1);
printf ("DIGITE UM CODIGO PARA SUA CARTA (1° letra do estado + 2 números): ");
scanf (" %s", &cod1);
printf ("DIGITE O NOME DE UMA CIDADE (sem ser nome coposto) DO ESTADO DA SUA CARTA: ");
scanf (" %s", &cid1);
printf ("DIGITE O NUMERO DE HABITANTES DA CIDADE ESCOLHIDA: ");
scanf ("%d", &pop1);
printf ("DIGITE A ÁREA DA SUA CIDADE(em km²): ");
scanf ("%f",&area1);
printf ("DIGITE O PIB DA SUA CIDADE: ");
scanf ("%f",&pib1);
printf ("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS QUE SUA CIDADE POSSUI: ");
scanf ("%d", &pts1);

//CARTA 1 -SAÍDA DE DADOS- 

printf("CARTA 1\n\n");

printf("CÓDIGO DA CARTA: %s.\n", cod1);
printf("ESTADO: %c.\n", est1);
printf("NOME DA CIDADE: %s.\n",cid1);
printf("POPULAÇÃO: %d.\n",pop1);
printf("ÁREA: %.2f km².\n",area1);
printf("PIB: %.2f.\n",pib1);
printf("QUANTIDADE DE PONTOS TURÍSTICOS: %d.\n\n\n",pts1);



//CARTA 02 -ENTRADA DE DADOS-

printf ("INSIRA OS DADOS DA SEGUNDA CARTA\n\n");

printf ("DIGITE A 1°LETRA DO ESTADO: ");
scanf (" %c", &est2);
printf ("DIGITE UM CODIGO PARA SUA CARTA (1° letra do estado + 2 números): ");
scanf (" %s", &cod2);
printf ("DIGITE O NOME DE UMA CIDADE (sem ser nome coposto) DO ESTADO DA SUA CARTA: ");
scanf (" %s", &cid2);
printf ("DIGITE O NUMERO DE HABITANTES DA CIDADE ESCOLHIDA: ");
scanf ("%d", &pop2);
printf ("DIGITE A ÁREA DA SUA CIDADE(em km²): ");
scanf ("%f",&area2);
printf ("DIGITE O PIB DA SUA CIDADE: ");
scanf ("%f",&pib2);
printf ("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS QUE SUA CIDADE POSSUI: ");
scanf ("%d", &pts2);

//CARTA 2 -SAÍDA DE DADOS- 

printf("CARTA 2\n\n");

printf("CÓDIGO DA CARTA: %s.\n", cod2);
printf("ESTADO: %c.\n", est2);
printf("NOME DA CIDADE: %s.\n",cid2);
printf("POPULAÇÃO: %d.\n",pop2);
printf("ÁREA: %.2f km².\n",area2);
printf("PIB: %.2f.\n",pib2);
printf("QUANTIDADE DE PONTOS TURÍSTICOS: %d.\n\n\n",pts2);

return 0;
} 
