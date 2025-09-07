#include <stdio.h>
int main() {
    int n, numero_og;
    int digito_ref;
    int digito_atual;
    int sao_iguais = 1;
    
    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);
    numero_og = n;
    
    if (n < 0) {
        n= -n;
    }
    if (n < 10) {
        printf("Sim, os digitos de %d sao todos iguais.\n", numero_og);
        return 0;
    }
    digito_ref = n % 10;
    
    while (n > 0) {
        digito_atual = n % 10;
        if (digito_atual != digito_ref) {
            sao_iguais = 0;
            break;
        }
    n = n / 10;
	}
    if (sao_iguais) { 
        if (sao_iguais == 1)
        printf("Sim, os digitos de %d sao todos iguais entre si. \n", numero_og);
    } else {
        printf("Nao, os digitos de %d nao sao todos iguais entre si. \n", numero_og);
    }
    return 0;
}
