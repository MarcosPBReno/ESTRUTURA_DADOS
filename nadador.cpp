#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int idade,nadador,soma,maior_id,menor_id,m;
  soma = 0;
  maior_id = 0;
  menor_id = 200;

  
  
  for(nadador=1;nadador<=5;nadador++) 
{
    
printf("\nQual a idade do nadador?\n");
scanf("%i",&idade);
soma=soma+idade;
if (idade > maior_id)
{        
         maior_id = idade;
}
if  (idade < menor_id)
{     
        menor_id = idade;
}
//escolha = Switch
//caso = case
switch (idade) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    printf("Sem Categoria");
    break;

  case 5:
  case 6:
  case 7:
    printf("Infantil A");
    break;
                  
  case 8:
  case 9:
  case 10:
    printf("Infantil B");
    break;
                  
  case 11:
  case 12:
  case 13:
    printf("Juvenil A");
    break;
                  
  case 14:
  case 15:
  case 16:
  case 17:
    printf("Juvenil B");
    break;
  
  default:
    printf("Adulto");
}
                  
}
      
}

m=soma/50;

   printf("\nA media de idade dos nadadores é:   ", m);//Problema aki<<<<<<<<<<<<<<<<<
   printf("\nA maior idade é:   ", maior_id);
   printf("\nA menor idade é:   ", menor_id);
   printf("\n\nFim do programa");






printf("\n\n");
system("pause");

    return 0;
}//fim