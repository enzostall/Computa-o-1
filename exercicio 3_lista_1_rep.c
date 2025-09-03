#include <stdio.h>

int main() {
	int n;
	float t1, t2, t3;

	float media;
	printf("Digite o numero de casos de teste: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("\n      Caso de teste %d   \n", i);
		printf("Digite os 3 valores reais: ");
		scanf("%f %f %f", &t1, &t2, &t3);
		media = (t1 * 2) + (t2 * 3) + (t3 * 5) / 10.0;


		printf("media ponderada: %.1f\n", media);
	}

	return 0;
}
