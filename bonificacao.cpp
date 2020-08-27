#include<stdio.h>
#include<math.h>
int main()
{
 float aumento,salario;
 int funcionario;
 printf("Digite o seu numero de Funcionario:");
 scanf ("%d",&funcionario);
 printf("Digite seu salario:");
 scanf("%f",&salario);
 printf("Seu salario e %f\n",salario);
  if (salario>=0.0&&salario>=1000.0) { aumento=0.15;salario=salario+(aumento*salario); }
  if (salario>=1000.01&&salario<=1500.0) { aumento=0.10;salario=salario+(aumento*salario); }
  if (salario>=1500.01&&salario<=2000.0) { aumento=0.05;salario=salario+(aumento*salario); }

  if (salario>2500) aumento=0;
 printf("voce e o funcionario numero %d e o seu salario ficou igual a %f apos o  aumento de %f%%\n",funcionario,salario,aumento);

return(0);
}