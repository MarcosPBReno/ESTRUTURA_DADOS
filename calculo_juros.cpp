#include <stdio.h>
#include <conio.h>
main()
{
	float valorI, valorF;
	int x;
	printf("\n Digite o valor do produto" );
	scanf("%f", &valorI);

	printf("\t\tMenu:\n\t\t1 > Avista com dinheiro.\n\t\t2 >Avista no cartao. \n\t\t3 > Em duas vezes. \n\t\t4 > Em tres vezes.");
	printf("\n\n Selecione um menu: ");
	scanf("%d",8x);

	if(x == 1)
	{
		valorF = valorI * 0.85;
		printf("\n ganhou desconto!\n\nTOTAL A PAGAR: R$ %.2f", valorF);

		else if(x == 2)
		{
			valorF = valorI * 0.90;
			printf("\n ganhou desconto!\n\nTOTAL A PAGAR: R$ %.2f", valorF);

			else if(x == 3)
			{
				printf("\n Sem juros!\n\nTOTAL A PAGAR: R$ %.2f", valorI);

				else if(x == 4)
				{
					valorF = valorI * 1.10;
					printf("\Pagando com juros!\n\nTOTAL A PAGAR: R$ %.2f", valorF);

					else
					{
						printf("\n\t\tErro no programa");
						getch();
						return(0);
					}
					getch(0);
				}
			}
