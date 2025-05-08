#include <stdio.h>

int main() {
int fim = 0;
int soma = 0;

printf("Digite um número inteiro: ");
scanf("%d", &fim);

for (int i = 1; i < fim; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
       soma += i;
    }
}

printf("A soma dos múltiplos de 3 ou 5 abaixo de %d é: %d\n", fim, soma);

    return 0;
}