#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int magico = rand() %500 +1;
	int palpite;
	int tentativas = 0;

	printf("JOGO DO ADVINHA \n");
	printf("Sorteei um numero magico entre 1 e 500. Tente advinhar!\n\n");

	do {
		printf("Digite seu palpite: ");
		scanf("%d", &palpite);
		tentativas++;
		if (palpite < magico)
		{
			printf("O numero eh maior.\n");
		}
		else if (palpite > magico) {
			printf("O numero eh menor.\n");
		}
	}
	while (palpite != magico);
	printf("\nPARABENS! voce acertou o numero %d em %d tentativas!\n", magico, tentativas);

	return 0;
}
