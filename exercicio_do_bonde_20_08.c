#include <stdio.h>

int main() {
	int alunos;
	int monitores;
	int total;
	printf("Quantos alunos vao? \n");
	scanf("%d", &alunos);
	printf("Quantos monitores vao? \n");
	scanf("%d", &monitores);

	total = alunos + monitores;
	if (total <=50) {
		printf("eh possivel levar todos em apenas uma viagem");
	}
	else {
		printf ("nao eh possivel levar todos em apenas uma viagem");
	}
	return 0;
}
