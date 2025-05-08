#include <stdio.h>

int main() {
    char nome[] = "Kauan";
    int i = 0;

    printf("Nome: %s\n\n", nome);

    // Percorre o array até encontrar o caractere nulo '\0'
    printf("* ");
    while (nome[i] != '\0') {
        printf("%c * ", nome[i]);
        i++;
    }
    printf("\n");

    return 0;
}