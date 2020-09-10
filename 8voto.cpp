#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,voto[10];
	float votonulo=0, votobranco=0, votovalido=0, total_votos;
	float pvalido, pbranco, pnulo;

	for(x=0;x<10;x++){

		printf("\nDigite seu voto\n\tCandidado a = 1\n\tCandidato b = 2\n\tVotar em branco = 0\n");
		scanf("%d",&voto[x]);

		if ( (voto[x]!=1) && (voto[x]!=2) && (voto[x]!=0) ) {

			votonulo ++;

		} else if((voto[x]==1) || (voto[x]==2)) {

			votovalido ++;

		}
		else if (voto[x]==0) {

			votobranco ++;

		}

		total_votos = votobranco + votovalido + votonulo;

		pvalido= votovalido/total_votos;

		pbranco=votobranco/total_votos;

		pnulo=votonulo/total_votos;

	}


	printf("\nO percentual de votos validos é : %f ", pvalido);

	printf("\nO percentual de votos brancos é : %f ", pbranco);

	printf("\nO percentual de votos nulos é : %f ", pnulo);


	system("PAUSE");
	return 0;
} 