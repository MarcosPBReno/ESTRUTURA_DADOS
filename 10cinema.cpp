#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int idade = 0;

int opiniao = 0;

int pess, ruim, regular, bom, otimo, soma_ruim, soma_bom, soma_otimo, maior_idade = 0;

void menu(){

int i;

printf("\n\nO que voc� achou do filme: "

  "\n1 - P�ssimo."

  "\n2 - Ruim."

  "\n3 - Regular."

  "\n4 - Bom."

  "\n5 - �timo.");

}

void info(){

printf("\nDigite sua idade: ");

scanf("%d", &idade);

menu();

printf("\nEscolha sua op��o: ");

scanf("%d", &opiniao);

switch (opiniao){

 case 1:

  pess++;

 break;

 case 2:

  ruim++;

  soma_ruim = soma_ruim + idade;

 break;

 case 3:

  regular++;

 break;

 case 4:

  bom++;

  soma_bom = soma_bom + idade;

 break;

 case 5:

  otimo++;

  soma_otimo = soma_otimo + idade;

 break;

}

}

int main(){

setlocale(LC_ALL, "Portuguese");

int op = 0;

float media;

float per;

do{

 info();

 op++;  

}while ( op < 20 );

printf("\n\n\nRESPOSTA DE CADA TIPO DE NOTA DADA AO FILME:");

printf("\n\nQuantidade que escolheram p�ssimo: %d", pess );

printf("\nQuantidade que escolheram ruim: %d", ruim);

printf("\nQuantidade que escolheram ruim regular: %d", regular);

printf("\nQuantidade que escolheram ruim bom: %d", bom);

printf("\nQuantidade que escolheram ruim �timo: %d", otimo);

 

printf("\n\nM�DIA DA IDADE DAS PESSOAS QUE ESCOLHERAM RUIM: %d", soma_ruim / ruim);

printf("\n\nPORCETAGEM DAS PESSOAS QUE ESCOLHERAM P�SSIMO: %.2f ", per = ( pess * 100 )/ op );

media = ( soma_otimo + soma_bom ) / op;

printf("\n\nM�DIA DA IDADES DAS PESSOAS QUE RESPONDERAM �TIMO OU BOM: %.2f", media);

 

return 0;

}