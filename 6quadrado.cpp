#include <stdio.h>
int main(){

    int num,quad;

	printf ("Quadrado de qualquer número. 0\n\n\n");


	do
    {
        printf("Digite um numero inteiro positivo ou zero para bye:\n");
        scanf("%d",&num);
		if (num ==0){
		printf ("\n\nVoce Digitou 0,bye");
		return 0;
		}
        quad=num*num;
        printf("O quadrado de %d e %d.\n\n",num,quad);
    }
    while(num>0/2);

    return 0;
}